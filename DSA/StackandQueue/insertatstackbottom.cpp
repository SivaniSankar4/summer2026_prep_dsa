//https://www.geeksforgeeks.org/problems/insert-an-element-at-the-bottom-of-a-stack/1
#include <iostream>
#include <stack>
using namespace std;
class Solution {
  public:
    stack<int> insertAtBottom(stack<int> st, int x) {
        if(st.empty()){
            st.push(x);
            return st;
        }
        int temp=st.top();
        st.pop();
        st=insertAtBottom(st,x);
        st.push(temp);
        return st;
    }
};