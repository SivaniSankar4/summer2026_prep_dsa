#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Helper function to perform BFS from a source node
bool bfsDetectCycle(int src, const vector<vector<int>>& adj, vector<bool>& visited) {
    // Queue stores pairs of {current_node, parent_node}
    queue<pair<int, int>> q;
    
    visited[src] = true;
    q.push({src, -1}); // Source node has no parent (-1)

    while (!q.empty()) {
        int node = q.front().first;
        int parent = q.front().second;
        q.pop();

        for (int neighbor : adj[node]) {
            // If neighbor is not visited, mark it visited and push to queue
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push({neighbor, node});
            }
            // If neighbor is visited and is not the parent, a cycle is found
            else if (neighbor != parent) {
                return true;
            }
        }
    }
    return false;
}

// Main function to check for cycles in all components
bool isCyclic(int V, const vector<vector<int>>& adj) {
    vector<bool> visited(V, false);

    // Loop through all nodes to handle disconnected components
    for (int i = 0; i < V; ++i) {
        if (!visited[i]) {
            if (bfsDetectCycle(i, adj, visited)) {
                return true;
            }
        }
    }
    return false;
}
