//https://www.geeksforgeeks.org/problems/k-distance-from-root/1
#include <bits/stdc++.h>
using namespace std;

// Binary Tree Node Structure
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

class Solution {
  public:
    vector<int> kdistance(int k, Node *root) {
        // code here
        vector<int> ans;
        if(root==NULL)return ans;
        queue<Node*> q;
        q.push(root);
        int count=0;
        while(!q.empty()){
            int l=q.size();
            for(int i=0;i<l;i++){
                Node* node=q.front();
                q.pop();
                if(count==k)ans.push_back(node->data);
                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
            count++;
        }
        return ans;
    }
    
};