#include<bits/stdc++.h>
using namespace std;
// int gcd(int a,int b){
//     while(b){
//         int c=a%b;
//         a=b;
//         b=c;
//     }
//     return a;
// }

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}
int main(){
    int a=48;
    int b=18;
    cout<<gcd(a,b);
}