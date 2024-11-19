#include<bits/stdc++.h>
using namespace std;
int nMeetings(int[] start,int[] end,int n){
    vector<pair<int,int>> meetings;
    for(int i=0;i<n;i++){
        meetings.push_back({start[i],end[i]});
    }
    sort(meetings.begin(),meetings.end(),[](pair<int,int> a,pair<int,int> b){
        return a.second<b.second;
    });
    int count=0;
    int lastEnd=-1;
    for(auto meet:meetings){
        if(meet.first>lastEnd){
            count++;
            lastEnd=meet.second;
        }
    }
    return count;
}
int main(){
    
}