#include<bits/stdc++.h>
using namespace std;
int maxP(vector<int>& values,int idx,bool buy){
    int profit=0;
    if(buy){
        profit=max(-values[idx]+maxP(values,idx+1,0),maxP(values,idx+1,1));
    }
    else{
        profit=max(values[idx]+maxP(values,idx+1,1),maxP(vales,idx+1,0));
    }
    return profit;
}
int maxProfit(vector<int>& values){
    bool buy=1;
    return maxP(values,0,buy);
}
int main(){

}