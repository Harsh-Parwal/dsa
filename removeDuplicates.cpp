#include<bits/stdc++.h>
using namespace std;
int removeElement(vector<int>& nums){
    int n=nums.size();
    int k=1;
    for(int i=1;i<n;i++){
        if(nums[i]!=nums[i-1]){
            nums[k]=nums[i];
            k++;
        }
    }
    return k;
}
int main(){

}