
// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
     bool cycle(int v,vector<bool> &visited,vector<int> adj[],int temp){
        visited[v]=true;
        for(int j=0;j<adj[v].size();j++){
            if(!visited[adj[v][j]]){
                if(cycle(adj[v][j],visited,adj,v)){
                    return true;
                }
                
            }
            else if(adj[v][j]!=temp){
                return true;
            }
        }
        return false;
    }
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        vector<bool> visited(V,false);
        for(int i=0;i<V;i++){
            if(!visited[i]){
            if(cycle(i,visited,adj,-1)){
                return 1;
        }
            }
    
    }
    return 0;
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >> E;
        vector<int> adj[V];
        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        Solution obj;
        bool ans = obj.isCycle(V, adj);
        if (ans)
            cout << "1\n";
        else
            cout << "0\n";
    }
    return 0;
}  // } Driver Code Ends