//https://www.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool bfshelp(int start,vector<vector<int>> &adj,vector<bool> &visited){
        queue<int> q;
        unordered_map<int,int> parent;
        visited[start]=true;
        q.push(start);
        parent[start]=-1;
        while(!q.empty()){
            int frontnode=q.front();
            q.pop();
            for(int neighbour:adj[frontnode]){
                if(!visited[neighbour]){
                    visited[neighbour]=true;
                    q.push(neighbour);
                    parent[neighbour]=frontnode;
                }else if(parent[frontnode]!=neighbour){
                    return true;
                }
            }
        }
        return false;
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        // Code here
        //undordered_map<int,list<int>> adj;
        vector<vector<int>> adj(V);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
                //bfs
                if(bfshelp(i,adj,visited)){
                    return true;
                }
            }
        }
         return false;
    }
};