class Solution {
public:
    void dfs(int node, vector<int> &vis, vector<vector<int>> &adj){
        vis[node] = 1;

        for(auto x : adj[node]){
            if(!vis[x]){
                dfs(x, vis, adj);
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        // first convert it to adj list
        int n = isConnected.size();

        vector<vector<int>> adj(n, vector<int>());

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(isConnected[i][j] == 1 && i != j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }

        // now go for dfs traversal

        int count = 0;
        vector<int> vis(n, 0);

        for(int i = 0; i < n; i++){
            if(!vis[i]){
                count++;
                dfs(i, vis, adj);
            }
        }
        return count;
    }
};
