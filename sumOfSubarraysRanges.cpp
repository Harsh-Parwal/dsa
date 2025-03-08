        #include<bits/stdc++.h>
        using namespace std;
        // https://leetcode.com/problems/sum-of-subarray-ranges/
        vector<int>fnge(vector<int>&arr,int n){ 
            stack<int>st;
            vector<int>res(n,n);
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && arr[i]>=arr[st.top()]){
                    st.pop();
                }
                if(!st.empty()){
                    res[i]=st.top();
                }
                st.push(i);
            }
            return res;
        }
        vector<int>fpge(vector<int>&arr,int n){
            vector<int>res(n,-1);
            stack<int>st;
            for(int i=0;i<n;i++){
                while(!st.empty() && arr[i]>arr[st.top()]){
                    st.pop();
                }
                if(!st.empty()){
                    res[i]=st.top();
                }
                st.push(i);
            }
            return res;
        }
        long long sumMax(vector<int>&arr,int n){
            vector<int>nge=fnge(arr,n);
            vector<int>pge=fpge(arr,n);
            long long total=0;
            for(int i=0;i<n;i++){
                total += (long long)(nge[i] - i) * (i - pge[i]) * arr[i];
                // OR
                // int ngtill=nge[i]-i;
                // int pgtill=i-pge[i];
                // total+=(long long)(ngtill*pgtill*arr[i]);
            }
            return total;
        }
    
        vector<int>fnse(vector<int>&arr,int n){
            stack<int>st;
            vector<int>res(n,n);
            for(int i=n-1;i>=0;i--){
                while(!st.empty() && arr[st.top()]>=arr[i]){
                    st.pop();
                }
                if(!st.empty()){
                   res[i]=st.top();
                }
                st.push(i);
            }
            return res;
        }
        vector<int>fpse(vector<int>&arr,int n){
            vector<int>res(n,-1);
            stack<int>st;
            for(int i=0;i<n;i++){
                while(!st.empty() && arr[st.top()]>arr[i]){
                    st.pop();
                }
                if(!st.empty()){
                    res[i]=st.top();
                }
                st.push(i);
            }
            return res;
        }
        long long sumMin(vector<int>&arr,int n){
            vector<int>pse=fpse(arr,n);
            vector<int>nse=fnse(arr,n);
            long long total=0;
            for(int i=0;i<n;i++){
                total += (long long)(nse[i] - i) * (i - pse[i]) * arr[i];
                // OR
                // int pstill=i-pse[i];
                // int nstill=nse[i]-i;
                // total+=(long long)(pstill*nstill*arr[i]);
            }
            return total;
        }
        long long subArrayRanges(vector<int>& nums) {
            int n=nums.size();
            return sumMax(nums,n)-sumMin(nums,n);
        }
        int main(){

        }