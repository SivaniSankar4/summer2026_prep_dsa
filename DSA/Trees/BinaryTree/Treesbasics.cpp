/*
Trees are unidirectional. 
path is distance from one node to another.
length of path is number of nodes in a path-1.
subtree
height of tree: maximum distance of root to leaf.
height of a node: maximum distance from that node to the leaf.
depth: number of nodes from root to that node.
edge :connection between two nodes
total number of edges in full binary tree with n nodes is n-1.
*/
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};