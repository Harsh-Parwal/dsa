#include<bits/stdc++.h>
using namespace std;
double funcPow(double x,int n){
    double result=1.0;
    int nn=n;
    if(nn<0){
        nn=nn*-1;
    }
    while(nn){
        if(nn%2!=0){
            result=result*x;
            nn=nn-1;
        }
        else{
            x=x*x;
            nn=nn/2;
        }
    }
    if(n<0){
        result=(double)1.0/(double)result;
    }
    return result;  
}
int main(){

}