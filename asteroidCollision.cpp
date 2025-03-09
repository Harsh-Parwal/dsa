#include<bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/asteroid-collision/
vector<int> asteroidCollision(vector<int>& arr) {
    int n = arr.size();
    stack<int> st;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            st.push(arr[i]);  // Push positive asteroid
        } 
        else {
            // Handle collision
            while (!st.empty() && st.top() > 0 && st.top() < abs(arr[i])) {
                st.pop();  // Destroy smaller positive asteroids
            }
            if (!st.empty() && st.top() == abs(arr[i])) {
                st.pop();  // Both asteroids destroy each other
            } 
            else if (st.empty() || st.top() < 0) {
                st.push(arr[i]);  // No collision or negative asteroid survives
            }
        }
    }

    vector<int> res(st.size());
    for (int i = res.size() - 1; i >= 0; i--) {
        res[i] = st.top();
        st.pop();
    }
    return res;
}
int main(){

}
