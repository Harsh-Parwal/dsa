#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/minimum-number-of-arrows-to-burst-balloons/description/
int findMinArrowShots(vector<vector<int>>& points){
    sort(points.begin(),points.end(),[](vector<int>& a,vector<int>& b){
        return a[0]<b[0];
    });

    int count=1;
    vector<int>prev=points[0];
    for(int i=1;i<points.size();i++){
        // int prevSP=prev[0];
        int prevEP=prev[1];

        int currSP=points[i][0];
        // int currEP=points[i][1];
        if(prevEP<currSP){
            // no overlap
            count++;
            prev=points[i];
        }
        else{
            // overlap
            prev[0]=max(prev[0],currSP);
            prev[1]=min(prevEP,points[i][1]);
        }
    }
    return count;
}
int main(){

}