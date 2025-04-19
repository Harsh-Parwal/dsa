#include<bits/stdc++.h>
using namespace std;
queue<int> modififyQueue(queue<int>q,int k){
    stack<int>st;
    // store the elements to be reversed
    for(int i=0;i<k;i++){
        st.push(q.front());
        q.pop();
    }
    // insert the k elements to queue
    while(!st.empty()){
        q.push(st.top());
        st.pop();
    }
    int rem=q.size()-k;
    // now insert remaining elements i.e. size()-k  to the back of queue
    while(rem){
        q.push(q.front());
        q.pop();
        rem--;
    }
    return q;
}
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    int k=3;
    queue<int>q1 =modififyQueue(q,k);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
}