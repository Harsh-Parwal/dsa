#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    Node* left;
    Node* right;
};
void rightv(Node* node,int level,vector<int>&ds){
    if(node==NULL){
        return;
    }
    if(ds.size()==level){
        ds.push_back(node->data);
    }
    rightv(node->right,level+1,ds);
    rightv(node->left,level+1,ds);
}
vector<int> rightView(Node* root){
    vector<int> res;
    rightv(root,0,res);
    return res;
}
int main(){

}