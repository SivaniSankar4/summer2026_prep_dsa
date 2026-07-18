
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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> ans;
        if(root==NULL)return -1;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size=q.size();
            long long sum=0;
            for(int i=0;i<size;i++){
                TreeNode* n=q.front();
                sum+=n->val;
                q.pop();
                if(n->left) q.push(n->left);
                if(n->right) q.push(n->right);
            }
            ans.push_back(sum);
        }
        sort(ans.begin(),ans.end());
        if(k>ans.size())return -1;
        return ans[ans.size()-k];
    }
};