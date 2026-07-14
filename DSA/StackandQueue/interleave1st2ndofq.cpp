//https://www.geeksforgeeks.org/problems/interleave-the-first-half-of-the-queue-with-second-half/1
class Solution {
  public:
    void rearrangeQueue(queue<int> &q) {
        // code here
        stack<int> st;
        int hs=q.size()/2;
        for(int i=0;i<hs;i++){
            st.push(q.front());
            q.pop();
        }
        for(int i=0;i<hs;i++){
            q.push(st.top());
            st.pop();
        }
        for(int i=0;i<hs;i++){
            q.push(q.front());
            q.pop();
        }
        for(int i=0;i<hs;i++){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            q.push(st.top());
            st.pop();
            q.push(q.front());
            q.pop();
        }
    }
};