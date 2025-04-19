#include<bits/stdc++.h>
using namespace std;
int maxSignal(string& str){
    int n=str.length();
    int maxi=0,count=0;
    for(int i=0;i<n;i++){
        if(str[i]=='0'){
            count++;
            maxi=max(maxi,count);
        }
        else{
            count=0;
        }
    }
    return maxi;
}
int main(){
    string str="10010100010";   
    cout<<maxSignal(str);
}