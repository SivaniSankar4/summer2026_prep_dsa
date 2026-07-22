//https://www.geeksforgeeks.org/problems/bfs-traversal-of-graph/1
//create a visited array to keep track of visited nodes
//create a queue for BFS traversal
//start from any node(lets say 0),mark it visited and push it in the queue
/*while(!q.empty()){
    remove front node
    add it to answer
    visit all unvisited neighbours, mark them visited and push them in queue
    return the BFS traversal output
}
*/

class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V=adj.size();
        
        vector<int> ans;
        vector<bool> visited(V,false);
        queue<int> q;
        //start bfs for node 0
        q.push(0);
        visited[0] =true;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            ans.push_back(front);
            for(auto n:adj[front]){
                if(!visited[n]){
                    visited[n]=true;
                    q.push(n);
                }
            }
        }
        return ans;
        
        
    }
};