#include<bits/stdc++.h>
using namespace std;

    int lcs(string& s,int n1,string& t,int n2,vector<vector<int>>& dp){
        if(n1==0 || n2==0){
            return 0;
        }
        if(dp[n1][n2]!=-1){
            return dp[n1][n2];
        }
        if(s[n1-1]==t[n2-1]){
            return dp[n1][n2]=1+lcs(s,n1-1,t,n2-1,dp);
        }
        else{
            return dp[n1][n2]=max(lcs(s,n1-1,t,n2,dp),lcs(s,n1,t,n2-1,dp));
        }
    }
    string shortestCommonSupersequence(string str1, string str2) {
        int n1=str1.length();
        int n2=str2.length();
        vector<vector<int>>dp(n1+1,vector<int>(n2+1,-1));
        lcs(str1,n1,str2,n2,dp);

        string ans="";
        int i=n1,j=n2;
        while(i>0 && j>0){
            if(str1[i-1]==str2[j-1]){
                ans+=str1[i-1];
                i--;
                j--;
            }
            else if(dp[i-1][j]>dp[i][j-1]){
                ans+=str1[i-1];
                i--;
            }
            else{
                ans+=str2[j-1];
                j--;
            }
        }
        while(i>0){
            ans+=str1[i-1];
            i--;
        }
        while(j>0){
            ans+=str2[j-1];
            j--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
int main(){

}