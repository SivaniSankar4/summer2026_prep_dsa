#include <iostream>
#include <vector>
using namespace std;
struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
//inorder
class Solution {
public:
    void Traversal(TreeNode* root,vector<int>& ans){
        if(root==NULL)return;
        if(root->left!=NULL)Traversal(root->left,ans);
        ans.push_back(root->val);
        if(root->right!=NULL)Traversal(root->right,ans);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        Traversal(root,ans);
        return ans;
    }
};
//preorder
class Solution {
public:
    void Traversal(TreeNode* root,vector<int>& ans){
        if(root==NULL)return;
        ans.push_back(root->val);
        if(root->left!=NULL)Traversal(root->left,ans);
        if(root->right!=NULL)Traversal(root->right,ans);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        Traversal(root,ans);
        return ans;
    }
};
//postorder
class Solution {
public:
    void Traversal(TreeNode* root,vector<int>& ans){
        if(root==NULL)return;
        if(root->left!=NULL)Traversal(root->left,ans);
        if(root->right!=NULL)Traversal(root->right,ans);
        ans.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> ans;
        Traversal(root,ans);
        return ans;
    }
};