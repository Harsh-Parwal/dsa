#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/longest-palindromic-substring/
string longestPalindrome(string s) {
    int n=s.length();
    string ans="";
    int reslen=0;

    for(int i=0;i<n;i++){
        int l=i,r=i;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>reslen){
                reslen=r-l+1;
                ans=s.substr(l,reslen);
            }
            l--,r++;
        }

        l=i,r=i+1;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>reslen){
                reslen=r-l+1;
                ans=s.substr(l,reslen);
            }
            l--;r++;
        }
    }
    return ans;
}
int main(){

}