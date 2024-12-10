#include<bits/stdc++.h>
using namespace std;
int maxScore(vector<vector<int>>& points,vector<vector<int>>& dp,int n_days,int last){
    if(n_days==0){
        int maxi=0;
        for(int task=0;task<3;task++){
            if(task!=last){
                maxi=max(maxi,points[n_days][task]);
            }
        }
        return maxi;
    }
    if(dp[n_days][last]!=-1){
        return dp[n_days][last];
    }
    int maxi=0;
    for(int task=0;task<3;task++){
        if(task!=last){
            int point=points[n_days][task]+maxScore(points,dp,n_days-1,task);
            maxi=max(maxi,point);
        }
    }
    return dp[n_days][last]=maxi;
}
int maxMerit(vector<vector<int>>& points){
    int n_days=points.size();
    vector<vector<int>> dp(n_days,vector<int>(4,-1));
    return maxScore(points,dp,n_days-1,3);
}
int main(){
    vector<vector<int>> points={{10,50,1},{5,100,1}};
    cout<<maxMerit(points);
}