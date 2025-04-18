#include<bits/stdc++.h>
using namespace std;
int nthNum(int n){
    if(n==1 || n==2){
        return 1;
    }
    else{
        if(n%2!=0){
            return 1*pow(2,n/2);
        }
        else{
            return 1*pow(3,(n/2)-1);
        }
    }
    return -1;
}
int main(){
    int n=10;
    cout<<nthNum(n);
}