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

int height(Node* root) {
        // code here
    if(root==NULL) return 0;
    if(root->left==NULL&&root->right==NULL)return 1;
    int x=height(root->left);
    int y=height(root->right);
    return max(x,y)+1;
}

int maxDepth(Node *root) {
        // code here
    if(root==NULL) return 0;
    int x=maxDepth(root->left);
    int y=maxDepth(root->right);
    return max(x,y)+1;
}
