#include<bits/stdc++.h>
using namespace std;
bool isAnagram(string& str1,string&str2){
    int n1=str1.length();
    int n2=str2.length();
    if(n1!=n2){
        return false;
    }
    map<char,int>mpp;
    for(int i=0;i<n1;i++){
        mpp[str1[i]]++;
        mpp[str2[i]]--;
    }
    for(auto it:mpp){
        if(it.second!=0){
            return false;
        }
    }
    return true;
}
int main(){
    string str1="geeksforgeeks";
    string str2="forgeeksgekks";

    if(isAnagram(str1,str2)){
        cout<<"Anagram ";
        return 0;
    }
    cout<<"Not Anagram";
    return 0;
}