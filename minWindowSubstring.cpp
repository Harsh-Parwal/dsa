#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-window-substring/
string minWindow(string s, string t) {
    int slen=s.length();
    int tlen=t.length();
    if(tlen>slen) return "";

    map<char,int>mpp;
    for(int i=0;i<tlen;i++){
        mpp[t[i]]++;
    }

    int l=0,r=0;
    int minLen=INT_MAX, sIdx=0;
    int cnt=0;
    while(r<slen){
        if(mpp[s[r]]>0){
            cnt++;
        }
        mpp[s[r]]--;

        while(cnt==tlen){
            if(minLen>r-l+1){
                minLen=r-l+1;
                sIdx=l;
            }
            mpp[s[l]]++;
            if(mpp[s[l]]>0){
                cnt--;
            }
            l++;
        }
        r++;
    }
    if(minLen==INT_MAX){
        return "";
    }
    return s.substr(sIdx,minLen);
}
int main(){

}