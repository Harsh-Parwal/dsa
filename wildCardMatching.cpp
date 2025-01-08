#include<bits/stdc++.h>
using namespace std;
// string matching where s2 contains special char's like "?" "*" "a...z"
bool ifmatches(string& s1,int n1,string& s2,int n2,vector<vector<int>>& dp){
    if(n1<=0 && n2<=0){
        return true;
    }
    if(n2<=0 && n1>0){
        return false;
    }
    if(n1<=0 && n2>0){
        for(int i=0;i<n2;i++){
            if(s2[i]!='*'){
                return false;
            }
            return true;
        }
    }

    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(s1[n1-1]==s2[n2-1] || s2[n2-1]=='?'){
        return dp[n1][n2]=ifmatches(s1,n1-1,s2,n2-1,dp);
    }
    if(s2[n2-1]=='*'){
        return dp[n1][n2]=ifmatches(s1,n1,s2,n2-1,dp)||ifmatches(s1,n1-1,s2,n2,dp);
    }
    else{
        return dp[n1][n2]=false;
    }
}
bool isMatch(string& s1,string& s2){
    int n1=s1.length();
    int n2=s2.length();
    vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
    return ifmatches(s1,n1,s2,n2,dp);
}
int main(){

}