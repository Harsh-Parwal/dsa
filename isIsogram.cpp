#include<bits/stdc++.h>
using namespace std;
bool isIsogram(string& s){
    int n=s.length();
    set<char>st;
    for(int i=0;i<n;i++){
        if(isalpha(s[i])){
            char ch=tolower(s[i]);
            if(st.find(ch)!=st.end()){
                return false;
            }
            st.insert(ch);
        }
    }
    return true;
}
int main(){
    string str="isOgram";
    // all characters to be unique
    if(isIsogram(str)){
        cout<<"Isogram";
        return 0;
    }
    cout<<"not isogram";
    return 0;
}