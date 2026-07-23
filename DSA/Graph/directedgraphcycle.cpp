//https://www.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
//directed graph: dfs
#include <bits/stdc++.h>
using namespace std;
class Solution {
  public:
    bool dfshelp(int start,vector<vector<int>> &adj,vector<bool> &visited,vector<bool> &rec){
        visited[start]=true;
        rec[start]=true;
        for(auto neighbour:adj[start]){
            if(!visited[neighbour]){
                if(dfshelp(neighbour,adj,visited,rec)) return true;
            }else if(rec[neighbour]){
                return true;
            }
        }
        rec[start]=false;
        return false;
    }
    bool isCyclic(int V, vector<vector<int>> &edges) {
        // code here
        vector<vector<int>> adj(V);
        for(auto i:edges){
            int u=i[0];
            int v=i[1];
            adj[u].push_back(v);
        }
        vector<bool> visited(V,false);
        vector<bool> rec(V,false);
        for(int i=0;i<V;i++){
            if(dfshelp(i,adj,visited,rec))return true;
        }
        return false;
    }
};