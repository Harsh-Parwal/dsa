#include<bits/stdc++.h>
using namespace std;
void reversef(int& num){
    string str=to_string(num);
    reverse(str.begin(),str.end());
    num=atoi(str.c_str());
    cout<<num;
}

// void reversef(int& num){
//     int ans=0;
//     while(num){
//         int dig=num%10;
//         num=num/10;
//         ans=ans*10+dig;
//     }
//     cout<<ans;
// }

// void reversef(int& num){
//     string str=to_string(num);
//     int n=str.length();
//     int l=0,r=n-1;
//     while(l<r){
//         swap(str[l],str[r]);
//         l++,r--;
//     }
//     num=atoi(str.c_str());
//     cout<<num;
// }
int main(){
    int num=123456;
    reversef(num);
}