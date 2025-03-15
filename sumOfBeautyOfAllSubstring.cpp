#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sum-of-beauty-of-all-substrings/
int beautySum(string s) {
    int n=s.length();
    int sum=0;
    for(int i=0;i<n;i++){
        vector<int>freq(26,0);
        for(int j=i;j<n;j++){
            freq[s[j]-'a']++;
            int maxi=0,mini=INT_MAX;

            for(auto it:freq){
                if(it>0){
                    maxi=max(maxi,it);
                    mini=min(mini,it);
                }
            }
            sum+=maxi-mini;
        }
    }
    return sum;
}
int main(){

}