#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/average-waiting-time/description/
double averageWaitingTime(vector<vector<int>>& customers){
    int nc=customers.size();
    int stime=0;
    long long wt=0;
    for(int i=0;i<nc;i++){
        if(customers[i][0]>stime){
            stime=customers[i][0];
        }
        int etime=stime+customers[i][1];
        wt+=etime-customers[i][0];
        stime=etime;
    }
    double avgtime=double(wt)/double(customers.size());
    return avgtime;
}
int main(){

}