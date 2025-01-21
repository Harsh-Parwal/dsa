#include<bits/stdc++.h>
using namespace std;
int maxDivScore(vector<int>& nums,vector<int>& divisors){
    int n1=nums.size();
    int n2=divisors.size();
    int maxi=0,num=INT_MAX;
    for(int i=0;i<n2;i++){
        int count=0;
        for(int j=0;j<n1;j++){
            if(nums[j]%divisors[i]==0){
                count++;
            }
        }
        if(count>=maxi){
            if(count==maxi){
                num=min(num,divisors[i]);
            }
            else{
                maxi=count;
                num=divisors[i];
            }
        }
    }
    return num;
}
int main(){

}