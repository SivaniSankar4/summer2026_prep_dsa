//https://www.geeksforgeeks.org/problems/boundary-traversal-of-binary-tree/1
#include <bits/stdc++.h>
using namespace std;
//Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 

class Solution {
  public:
    void leftTrav(Node *root,vector<int>& ans){
        if(root==NULL||root->left==NULL&&root->right==NULL) return;
        
        ans.push_back(root->data);
        if(root->left){
            leftTrav(root->left,ans);
        }else{
            leftTrav(root->right,ans); 
        }
    }
    void leafTrav(Node *root,vector<int>& ans){
        if(root==NULL)return;
        if(root->left==NULL&&root->right==NULL){
            ans.push_back(root->data);
            return;
        }
        leafTrav(root->left,ans);
        leafTrav(root->right,ans);
        
    }
    void rightTrav(Node *root,vector<int>& ans){
        if(root==NULL||root->left==NULL&&root->right==NULL)return;
        if(root->right) rightTrav(root->right,ans);
        else rightTrav(root->left,ans);
        ans.push_back(root->data);
    }
    vector<int> boundaryTraversal(Node *root) {
        // code here
        vector<int> ans;
        ans.push_back(root->data);
        leftTrav(root->left,ans);
        leafTrav(root->left,ans);
        leafTrav(root->right,ans);
        rightTrav(root->right,ans);
        return ans;
    }
};