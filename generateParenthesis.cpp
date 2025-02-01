#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/generate-parentheses/description/
void genParen(string& res,int n,int open,int close,vector<string>& ds){
    if(res.size()==2*n){
        ds.push_back(res);
        return;
    }

    if(open<n){
        res.push_back('(');
        genParen(res,n,open+1,close,ds);
        res.pop_back();
    }
    if(close<open){
        res.push_back(')');
        genParen(res,n,open,close+1,ds);
        res.pop_back();
    }
}
vector<string> generateParenthesis(int n){
    vector<string> ds;
    string res="";
    int open=0,close=0;
    genParen(res,n,open,close,ds);
    return ds;
}
int main(){

}