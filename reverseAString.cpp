#include<bits/stdc++.h>
using namespace std;
// void reverseString(string&str){
//     int n=str.length();
//     int l=0,r=n-1;
//     while(l<r){
//         swap(str[l],str[r]);
//         l++;r--;
//     }
// }

void reverseString(string& str){
    stack<char>st;
    int n=str.length();
    for(int i=0;i<n;i++){
        st.push(str[i]);
    }
    str="";
    while(!st.empty()){
        str+=st.top();
        st.pop();
    }
}
int main(){
    string str="harsh";
    reverseString(str);
    cout<<str;
}