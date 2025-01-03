#include<bits/stdc++.h>
using namespace std;
int lcs(string& str1,int n1,string& str2,int n2,vector<vector<int>>& dp){
    if(n1<0 || n2<0){
        return 0;
    }
    if(dp[n1][n2]!=-1){
        return dp[n1][n2];
    }
    if(str1[n1]==str2[n2]){
        return dp[n1][n2]=1+lcs(str1,n1-1,str2,n2-1,dp);
    }
    else{
        return dp[n1][n2]=0+max(lcs(str1,n1-1,str2,n2,dp),lcs(str1,n1,str2,n2-1,dp));
    }
}
int longestCommonSubsequence(string text1, string text2) {
    int n1=text1.length();
    int n2=text2.length();
    vector<vector<int>> dp(n1,vector<int>(n2,-1));
    int len=lcs(text1,n1-1,text2,n2-1,dp);

    // string ans="";
    // for(int i=0;i<len;i++){
    //     ans+='$';
    // }
    // int i=n1,j=n2;
    // int idx=len-1;
    // while(i>0 && j>0){
    //     if(text1[i-1]==text2[j-1]){
    //         ans[idx]=text1[i-1];
    //         idx--;
    //         i--,j--;
    //     }
    //     else if(dp[i-1][j]>dp[i][j-1]){
    //         i--;
    //     }
    //     else{
    //         j--;
    //     }
    // }
    // cout<<ans<<endl;
    
    return len;
             
}
int main(){
    cout<<longestCommonSubsequence("abcde","bdgek");
}