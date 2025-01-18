// https://leetcode.com/problems/removing-minimum-number-of-magic-beans/description/
#include<bits/stdc++.h>
using namespace std;
long long minRemoval(vector<int>& beans){
    auto compt=[&](auto n1.auto n2){
        return n1<n2;
    }
    sort(beans.begin(),beans.end(),compt);
    long long sum=0;
    long long n=beans.size();
    for(int i=0;i<n;i++){
        sum+=beans[i];
    }
    long long result=sum;
    for(int i=0;i<n;i++){
        long long newres=sum-((n-i)*beans[i]);
        if(newres<result){
            result=newres;
        }
    }
    return result;
}
int main(){

}