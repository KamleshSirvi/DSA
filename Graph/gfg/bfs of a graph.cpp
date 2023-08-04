vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Code here
        vector<int> ans;
        
        // it has given adj list
        queue<int> q;
        vector<int> v(V, 0);
        
                q.push(0);
                v[0] = 1;
                
                while(!q.empty()){
                    int front = q.front();
                    
                    q.pop();
                    
                    ans.push_back(front);
                    
                    for(auto it : adj[front]){
                        if(!v[it]){
                            v[it] = 1;
                            q.push(it);
                        }
                    
            }
        }
        return ans;
        
    }
