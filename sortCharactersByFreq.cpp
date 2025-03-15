#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/sort-characters-by-frequency/description/
string sortByFreq(string &s){
    int n=s.length();
    unordered_map<char,int>mpp;
    for(int i=0;i<n;i++){
        mpp[s[i]]++;
    }

    vector<pair<char,int>>freqVector(mpp.begin(),mpp.end());
    sort(freqVector.begin(),freqVector.end(),[](pair<char,int> a, pair<char,int> b){
        return a.second>b.second;
    });

    string ans="";
    for(auto it:freqVector){
        int timesRepeat=it.second;
        while(timesRepeat){
            ans+=it.first;
            timesRepeat--;
        }
    }
    return ans;
}
int main(){
    string s="zzzeeeaqqqqpp";
    cout<<sortByFreq(s);
}