vector<int> shortestPath(vector<vector<int>>& edges, int n,int m, int src){
        // code here
        unordered_map<int, vector<int>> mp;
        
        for(int i = 0; i < m; i++){
            mp[edges[i][0]].push_back(edges[i][1]);
            mp[edges[i][1]].push_back(edges[i][0]);
        }
        
        // for(auto x : mp){
        //     cout << x.first << " -> ";
        //     for(auto y : x.second){
        //         cout << y << " ";
        //     }
        //     cout << endl;
        // }
        
        vector<int> ans(n, -1);
        vector<int> vis(n, 0);
        queue<int> q;
        int count = 0;

                q.push(src);
                ans[src] = count;
                // count++;
                vis[src] = 1;
                q.push(-1);
                
                
                // ans.push_back(src);
                
                while(!q.empty()){
                    if(q.front() == -1){
                        // ans.push_back(-1);
                        count++;
                        if(q.size() == 1){
                            break;
                        }
                        q.pop();
                        q.push(-1);
                    }else{
                        int top = q.front();
                        q.pop();
                        
                        ans[top] = count;
                        
                        for(auto x : mp[top]){
                            if(!vis[x]){
                                q.push(x);
                                vis[x] = 1;
                            }
                        }
                        
                    }
                }
                
        return ans;
    }
