#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-deletions-to-make-string-k-special/description/
int minimumDeletions(string word,int k){
    vector<int>freq(26,0);
    for(int i=0;i<word.length();i++){
        freq[word[i]-'a']++;
    }
    sort(freq.begin(),freq.end());
    int res=word.length();
    for(int i=0;i<26;i++){
        int del=cum_del;
        for(int j=25;j>i;j--){
            if(freq[j]-freq[i]<=k){
                break;
            }
            del+=freq[j]-freq[i]-k;
        }
        res=min(res,del);
        cum_del+=freq[i];
    }
    return res;
}
int main(){

}