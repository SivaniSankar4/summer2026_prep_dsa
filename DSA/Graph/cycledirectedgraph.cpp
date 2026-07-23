#include <iostream>
#include <vector>

using namespace std;

// DFS helper function to detect cycles
bool dfsCheck(int node, const vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& inStack) {
    visited[node] = true;
    inStack[node] = true; // Mark node as part of the current path

    for (int neighbor : adj[node]) {
        // If neighbor is not visited, recursively check it
        if (!visited[neighbor]) {
            if (dfsCheck(neighbor, adj, visited, inStack)) {
                return true;
            }
        } 
        // If neighbor is already in the active path, a cycle is found
        else if (inStack[neighbor]) {
            return true;
        }
    }

    inStack[node] = false; // Backtrack: remove node from the current path
    return false;
}

// Main function to check if the directed graph contains a cycle
bool isCyclic(int V, const vector<vector<int>>& adj) {
    vector<bool> visited(V, false);
    vector<bool> inStack(V, false);

    // Check all components of the graph
    for (int i = 0; i < V; i++) {
        if (!visited[i]) {
            if (dfsCheck(i, adj, visited, inStack)) {
                return true;
            }
        }
    }
    return false;
}
