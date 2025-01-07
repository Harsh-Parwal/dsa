#include<bits/stdc++.h>
using namespace std;
int minSteps(int n1,int n2,string& s,string& t,vector<vector<int>>& dp){
    if(n1<=0){
        return n2;
    }
    if(n2<=0){
        return n1;
    }
    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(s[n1-1]==t[n2-1]){
        return dp[n1][n2]=minSteps(n1-1,n2-1,s,t,dp);
    }
    else{
        return min(1+minSteps(n1,n2-1,s,t,dp),min(1+minSteps(n1-1,n2,s,t,dp),1+minSteps(n1-1,n2-1,s,t,dp)));
    }
}
int minDistance(string& word1,string& word2){
    int n1=word1.length();
    int n2=word2.length();
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
    return minSteps(n1,n2,word1,word2,dp);
}
int main(){

}