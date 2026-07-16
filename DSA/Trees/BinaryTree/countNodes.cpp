#include <iostream>
using namespace std;
class Node {
public:
    int data;
    struct Node* left;
    struct Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; 
//https://www.geeksforgeeks.org/problems/size-of-binary-tree/1
//count number of nodes in the tree
class Solution {
  public:

    int getSize(Node* root) {
        // code here
        if(root==NULL) return 0;
        int x=getSize(root->left);
        int y=getSize(root->right);
        return x+y+1;
        
    }
};
//https://www.geeksforgeeks.org/problems/count-leaves-in-binary-tree/1
//count number of leaf nodes
class Solution {
  public:
    // Function to count the number of leaf nodes in a binary tree.
    int countLeaves(Node* root) {
        // write code here
        if(root==NULL)return 0;
        if(root->left==NULL&&root->right==NULL)return 1;
        int x=countLeaves(root->left);
        int y=countLeaves(root->right);
        return x+y;
        
    }
};