#include <bits/stdc++.h>
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        queue<TreeNode*> q;
        vector<vector<int>> ans;
        //stack<vector<int>> st;
        if(root==nullptr) return ans;
        q.push(root);
        while(!q.empty()){
            vector<int> level;
            int ls=q.size();
            for(int i=0;i<ls;i++){
                level.push_back(q.front()->val);
                TreeNode* n=q.front();
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            // st.push(level);
            ans.push_back(level);
        }
        // while(!st.empty()){
        //     ans.push_back(st.top());
        //     st.pop();
        // }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};