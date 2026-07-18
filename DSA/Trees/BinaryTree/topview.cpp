  #include <iostream>
#include <vector>
#include <queue>
#include <map>

using namespace std;
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        vector<int> ans;
        //we will create a map to first node at each horizontal distance
        //horizontaldistance:node value
        map<int,int> topNode;
        
        if(root==nullptr)return ans;
        queue<pair<Node*,int>> q;
        //start with 0at hd=0.
        q.push(make_pair(root,0));
        while(!q.empty()){
            pair<Node*,int>  frontN=q.front();
            q.pop();
            
            Node* node=frontN.first;
            int hd=frontN.second;
            
            if(topNode.find(hd)==topNode.end()){
                topNode[hd]=node->data;
            }
            if(node->left) q.push(make_pair(node->left,hd-1));
            if(node->right) q.push(make_pair(node->right,hd+1));
            
        }
        for(auto i:topNode){
            ans.push_back(i.second);
        }
        return ans;
    }
};