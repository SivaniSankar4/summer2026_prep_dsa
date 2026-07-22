//https://www.geeksforgeeks.org/problems/depth-first-traversal-for-a-graph/1
//create a visited array to keep track of visited nodes
//start DFS from node 0
//mark current node visited and add it to answer
//visit all unvisited neighbour
//visit all unvisited neighbour recursively
class Solution {
  public:
    void dfshelper(int node,vector<vector<int>>& adj,vector<bool> &visited,vector<int> &ans)
    {
        visited[node]=true; 
        ans.push_back(node);
        for(auto n:adj[node]){
            if(!visited[n]){
                dfshelper(n,adj,visited,ans);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int V=adj.size();
        vector<int> ans;
        vector<bool> visited(V,false);
        dfshelper(0,adj,visited,ans);
        return ans;
        
    }
};