#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/
int maxDepth(string s){
    int n=s.length();
    int currlen=0,maxlen=0;
    for(int i=0;i<n;i++){
        if(s[i]=='('){
            currlen++;
            maxlen=max(maxlen,currlen);
        }
        else if(s[i]==')'){
            currlen--;
        }
    }
    return maxlen;
}
int main(){

}