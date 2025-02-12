#include<bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/binary-tree-cameras/description/
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

int cams=0;
int dfs(TreeNode* root){
    if(!root) return 2;
    int left=dfs(root->left);
    int right=dfs(root->right);

    if(left==0 || right==0){
        cams++;
        return 1;
    }
    if(left==1 || right==1){
        return 2;
    }
    return 0;
}
int minCameraCover(TreeNode* root){
    if(dfs(root)==0){
        cams++;
    }
    return cams;
}
int main(){

}