#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/description/
int numberOfSubstrings(string s) {
    int n=s.length();

    int l=0,r=0;
    int mpp[3]={0};
    int cnt=0;
    while(r<n){
        mpp[s[r]-'a']++;
        while(mpp[0]>0 && mpp[1]>0 && mpp[2]>0){
            cnt+=n-r;
            mpp[s[l]-'a']--;
            l++;
        }
        r++;
    }
    return cnt;
}
int main(){

}