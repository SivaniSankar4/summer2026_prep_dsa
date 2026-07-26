class Solution {
  public:
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // Kahn's algo
        //compute indegree of every node
        //push all the nodes with indegree =0 in the queue
        //remove nodes one by one for queue, and add to the answer
        //for each removed node, decrease the indegree of its neighbour by 1
        //if any neighbour becomes indegree=0 , push that in queue
        //if number of visited nodes is not equal to number of vertices it means a cycle exist
        //so valid topological sort is mot possible
        vector<vector<int>> adj(V);
 
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        //create an indegree vector
        vector<int>indegree(V,0);
        for(int i=0;i<V;i++){
            for(int j:adj[i]){
                indegree[j]++;
            }
        }
        //push akk vertices with indegree 0 in queue
        queue<int> q;
        for(int i=0;i<V;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }
        vector<int> result;
        while(!q.empty()){
            int front=q.front();
            q.pop();
            result.push_back(front);
            for(auto neighbour:adj[front]){
                indegree[neighbour]--;
                if(indegree[neighbour]==0){
                    q.push(neighbour);
                }
            }
        }
        if(result.size()!=V){
            return {};
        }
        return result;
        
    }
};












/*
class Solution {
  public:
  void dfs(int node,vector<vector<int>> &adj, vector<bool> &visited,stack<int>& st){
      visited[node] = true; 
      for(auto neighbour: adj[node]){
          if(!visited[neighbour]){
              
              dfs(neighbour,adj,visited,st);
          }
      }
      st.push(node);
  }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        vector<vector<int>> adj(V);
        vector<bool> visited(V,false);
        for(auto i :edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        stack<int> st;
        for(int i=0;i<V;i++){
            if(!visited[i]){
                //dfs
               
                dfs(i,adj,visited,st);
                
            }
        }
        vector<int> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        return result;
        
    }
};
*/