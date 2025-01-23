#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/number-of-substrings-containing-all-three-characters/
int numberOfSubstrings(string s){
    int n=s.length();
    int count=0;
    int hash[3]={-1,-1,-1};
    for(int i=0;i<n;i++){
        hash[s[i]-'a']=i;
        if(hash[0]!=-1 && hash[1]!=-1 && hash[2]!=-1){
            count+=1+min(hash[0],min(hash[1],hash[2]));
        }
    }
    return count;
}
int main(){

}