 bool dfs(int src, vector<int> adj[], vector<int> &vis, int parent){
        vis[src] = 1;
        
        for(int x : adj[src]){
            if(!vis[x]){
                // it is required because return nhi karege to recursive call m last m  
                // return nhi hoga if loop present huaa to
                if(dfs(x, adj, vis, src)){
                    return true;
                };
            }else if(x != parent){
                return true;
            }
        }
        return false;
    }
    
    // Function to detect cycle in an undirected graph.
    bool isCycle(int V, vector<int> adj[]) {
        // Code here
        // dfs traversal
        vector<int> vis(V, 0);
        
        // if graph is disconneced
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, -1) == true){
                    return true;
                }
            }
        }
        return false;
        
        
    }
