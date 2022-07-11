
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
  public:
    vector<int> DFS(vector<int> &ans,stack<int> &st,vector<bool> &visited,vector<int> adj[]){
        if(st.empty()==true){
            return ans;
        }
        int i=st.top();
        if(!visited[st.top()]){
        ans.push_back(st.top());
        }
         visited[st.top()]=true;
        st.pop();
        for(int j=adj[i].size()-1;j>=0;j--){
            if(!visited[adj[i][j]]){
            st.push(adj[i][j]);
            }
        }
        return(DFS(ans,st,visited,adj));
    }
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<bool> visited(V,false);
        vector<int> ans;
        stack<int> st;
        st.push(0);
        return DFS(ans,st,visited,adj);
        
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
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.dfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends