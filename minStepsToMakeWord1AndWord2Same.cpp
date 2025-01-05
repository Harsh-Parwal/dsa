#include<bits/stdc++.h>
using namespace std;
int lcs(string& s1,int n1,string& s2,int n2,vector<vector<int>>& dp){
        if(n1<0 || n2<0){
            return 0;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        if(s1[n1]==s2[n2]){
            return dp[n1][n2]=1+lcs(s1,n1-1,s2,n2-1,dp);
        }
        else{
            return dp[n1][n2]=max(lcs(s1,n1-1,s2,n2,dp),lcs(s1,n1,s2,n2-1,dp));
        }
    }
    int minDistance(string word1, string word2) {
        int n1=word1.length();
        int n2=word2.length();
        vector<vector<int>>dp(n1,vector<int>(n2,-1));
        int l=lcs(word1,n1-1,word2,n2-1,dp);
        return (n1-l)+(n2-l);
    }
int main(){

}