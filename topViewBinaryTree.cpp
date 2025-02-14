#include<bits/stdc++.h>
using namespace std;
// https://www.geeksforgeeks.org/problems/top-view-of-binary-tree/1
struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> topView(Node* root){
    vector<int>res;
    if(root==NULL){
        return res;
    }

    map<int,int>mpp;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int i=it.second;
        if(mpp.find(i)==mpp.end()){
            mpp[i]=node->data;
        }
        if(node->left!=NULL){
            q.push({node->left,i-1});
        }
        if(node->right!=NULL){
            q.push({node->right,i+1});
        }
    }
    for(auto it:mpp){
        res.push_back(it.second);
    }
    return res;
}
int main(){

}