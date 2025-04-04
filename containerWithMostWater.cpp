// https://leetcode.com/problems/container-with-most-water/
#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>&height){
    int l=0,r=height.size()-1;
    int maxi=0;
    while(l<=r){
        int w=r-l;
        int h=min(height[l],height[r]);
        int area=w*h;
        maxi=max(maxi,area);

        if(height[l]<height[r]){
            l++;
        }
        else{
            r--;
        }
    }
    return maxi;
}
int main(){

}