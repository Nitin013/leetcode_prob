// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> BFS(vector<int> &ans,queue<int> &qe,vector<bool> &visited,vector<int> adj[]){
        if(qe.empty()){
            return ans;
        }
        if(!visited[qe.front()]){
            ans.push_back(qe.front());
        }
        int j=qe.front();
        visited[qe.front()]=true;
        qe.pop();
        for(int i=0;i<adj[j].size();i++){
            if(!visited[adj[j][i]]){
            qe.push(adj[j][i]);
            }
        }
        return (BFS(ans,qe,visited,adj));
    }
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V,false);
        vector<int> ans;
        queue<int> qe;
        qe.push(0);
        return(BFS(ans,qe,visited,adj));
    }
};

// { Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends