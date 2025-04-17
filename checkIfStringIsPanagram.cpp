#include<bits/stdc++.h>
using namespace std;
bool checkIfPan(string& str,int n){
    set<char>st;
    for(int i=0;i<n;i++){
        if(isalpha(str[i])){
            st.insert(tolower(str[i]));
        }
    }
    if(st.size()==26){
        return true;
    }
    return false;
}
int main(){
    string str="The quick brown fox jumps over the lazy dog";
    int n=str.length();
    cout<<checkIfPan(str,n);

}