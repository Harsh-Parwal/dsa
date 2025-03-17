#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/reverse-words-in-a-string/description/
string reverseWords(string s){
    int n=s.length();
    reverse(s.begin(),s.end());
    int i=0;
    int l=0,r=0;

    while(i<n){
        while(i<n && s[i]!=' '){
            s[r]=s[i];
            r++,i++;
        }
        if(l<r){
            reverse(s.begin()+l,s.begin()+r);
            s[r]=' ';
            r++;
            l=r;
        }
        i++;
    }
    return s.substr(0,r-1);
}
int main(){
    string s="this is game over";
    cout<<reverseWords(s);
}