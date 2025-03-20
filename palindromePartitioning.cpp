#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/palindrome-partitioning/
bool isPalindrome(int i,int j,string& s){
    while(i<=j){
        if(s[i]!=s[j]){
            return false;
        }
        i++,j--;
    }
    return true;
}

void partitionFunc(int idx,string& s,vector<vector<string>>&res,vector<string>&ans){
    if(idx==s.length()){
        res.push_back(ans);
        return;
    }
    for(int i=idx;i<s.length();i++){
        if(isPalindrome(idx,i,s)){
            ans.push_back(s.substr(idx,i-idx+1));
            partitionFunc(i+1,s,res,ans);
            ans.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>>res;
    vector<string>ans;
    partitionFunc(0,s,res,ans);
    return res;
}
int main(){

}