#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;
};
vector<int> bottomView(Node* root){
    vector<int>res;
    if(root==NULL){
        return res;
    }
    queue<pair<Node*,int>>q;
    q.push({root,0});
    map<int,int>mpp;
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        Node* node=it.first;
        int i=it.second;
        mpp[i]=node->data;
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