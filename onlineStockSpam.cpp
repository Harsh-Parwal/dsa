#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/online-stock-span/description/
class StockSpanner {
    public:
        stack<pair<int,int>>st;
        int idx=-1;
        StockSpanner() {
            
        }
        
        int next(int price) {
            idx+=1;
            while(!st.empty() && price>=st.top().first){
                st.pop();
            }
            int ans=idx-(st.empty()?-1:st.top().second);  // compute answer before pushing 
            st.push({price,idx});
            return ans;
        }
};
int main(){

}