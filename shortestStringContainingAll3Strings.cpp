#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/shortest-string-that-contains-three-strings/description/
string res="";
string merge(string a,string b){
    if(a.find(b)!=string::npos){
        return a;
    }
    for(int i=min(a.length(),b.length());i>0;i--){
        if(a.substr(a.length()-i)==b.substr(0,i)){
            return a+b.substr(i);
        }
    }
    return a+b;
}
string lookShorterAns(string newstr,string str){
    if(newstr.length()==str.length()){
        if(newstr.compare(str)<0){
            return newstr;
        }
        return str;
    }
    return newstr.length()<str.length()?newstr:str;
}
void findPermute(string a,string b,string c){
    string mgstr=merge(merge(a,b),c);
    res=lookShorterAns(mgstr,res);
}
string minimumString(string a,string b,string c){
    res=a+b+c;
    findPermute(a,b,c);
    findPermute(a,c,b);
    findPermute(b,a,c);
    findPermute(b,c,a);
    findPermute(c,a,b);
    findPermute(c,b,a);
    return res;
}
int main(){

}