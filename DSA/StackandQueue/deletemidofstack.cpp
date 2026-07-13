//https://www.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1
#include <iostream>
#include <stack>
using namespace std;
class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s,int count,int size){
        if(count==size/2){
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        solve(s,count+1,size);
        s.push(temp);
    }
    void deleteMid(stack<int>& s) {
        // code here..
        int size=s.size();
        solve(s,0,size);
        
    }
};