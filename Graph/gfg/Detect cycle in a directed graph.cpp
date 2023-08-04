bool dfs(int src, vector<int> adj[], vector<int> &vis, vector<int> &recursionStack){
        vis[src] = 1;
        recursionStack[src] = 1;
        
        for(int x : adj[src]){
            if(!vis[x]){
                if(dfs(x, adj, vis, recursionStack)){
                    return true;
                }
            }else if(recursionStack[x]){
                return true;
            }
        }
        recursionStack[src] = 0;
        return false;
    }
    
    bool isCyclic(int V, vector<int> adj[]) {
        // code here
        
        vector<int> vis(V, 0);
        vector<int> recursionStack(V, 0);
        
        for(int i = 0; i < V; i++){
            if(!vis[i]){
                if(dfs(i, adj, vis, recursionStack)){
                    return true;
                }
            }
        }
        return false;
    }
