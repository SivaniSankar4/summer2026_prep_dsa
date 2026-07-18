#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
  
  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)return ans;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int levelsize=q.size();
            vector<int> levelelements;
    
            for(int i=0;i<levelsize;i++){
                TreeNode* frontNode=q.front();
                q.pop();
                levelelements.push_back(frontNode->val);
                if(frontNode->left)q.push(frontNode->left);
                if(frontNode->right)q.push(frontNode->right);

            }
            ans.push_back(levelelements);
        }
        return ans;
    }
};