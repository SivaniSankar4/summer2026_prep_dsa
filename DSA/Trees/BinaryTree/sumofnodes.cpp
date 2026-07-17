#include <iostream>
using namespace std;
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
    int sumBT(Node* root) {
        // code here
        if(root==NULL)return 0;
        int x=sumBT(root->left);
        int y=sumBT(root->right);
        return x+y+root->data;
    }
};
//sum of left leaves
class Solution {
public:
    int sumOfLeftLeaves(Node* root) {
       if(root==NULL)return 0;
       int sum=0;
       if(root->left&&root->left->left==NULL&&root->left->right==NULL) {
        sum+=root->left->data;
       }
       sum+=sumOfLeftLeaves(root->left);
       sum+=sumOfLeftLeaves(root->right);
       return sum;
    }
};