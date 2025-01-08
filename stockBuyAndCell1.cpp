#include<bits/stdc++.h>
using namespace std;
int maxP(vector<int>& values,int i,int mini,int maxi){
    if(i==values.size()){
        return maxi;
    }
    mini=min(mini,values[i]);
    maxi=max(maxi,values[i]-mini);
    return maxP(values,i+1,mini,maxi);
}
int maxProfit(vector<int>& values){
    int mini=INT_MAX;
    int maxi=0;
    return maxP(values,0,mini,maxi);
}
int main(){

}