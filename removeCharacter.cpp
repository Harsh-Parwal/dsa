#include<bits/stdc++.h>
using namespace std;
string removeChar(string& str1,string &str2){
    set<char>st(str2.begin(),str2.end());
    int n=str1.length();
    string ans="";
    for(int i=0;i<n;i++){
        if(st.find(str1[i])==st.end()){
            ans+=str1[i];
        }
    }
    return ans;
}
int main(){
    string str1="computer";
    string str2="cat";
    //  ompuer
    string res=removeChar(str1,str2);
    cout<<res;
}