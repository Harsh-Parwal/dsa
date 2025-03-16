#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/count-number-of-substrings4528/1
int funcCount(string& s,int k){
    if(k==0) return 0;
    int n=s.length();
    int l=0,r=0,count=0;
    unordered_map<char,int>mpp;
    for(r=0;r<n;r++){
        mpp[s[r]]++;
        while(mpp.size()>k){
            mpp[s[l]]--;
            if(mpp[s[l]]==0){
                mpp.erase(s[l]);
            }
            l++;
        }
        count+=r-l+1;       // here we are counting for the number of subarrays having <=k characters
    }
    return count;
}
int countSubstr(string& s, int k) {
    return funcCount(s,k)-funcCount(s,k-1);
}
int main(){

}