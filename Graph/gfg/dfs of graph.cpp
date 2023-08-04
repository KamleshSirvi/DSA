void dfs(int node, vector<int> adj[], vector<int> &ans, int vis[]){
        vis[node] = 1;
        ans.push_back(node);
        
        for(auto x : adj[node]){
            if(!vis[x]){
                dfs(x, adj, ans, vis);
            }
        }
    }
  public:
    // Function to return a list containing the DFS traversal of the graph.
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        int vis[V] = {0};
        int start = 0;
        
        dfs(start, adj, ans, vis);
        return ans;
    }
