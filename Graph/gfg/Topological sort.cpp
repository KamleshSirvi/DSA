class Solution
{
	public:
	//Function to return list containing vertices in Topological order. 
	stack<int> s;
	void dfs(int src, vector<int> adj[], vector<int> &vis){
	    vis[src] = 1;
	    for(auto x : adj[src]){
	        if(!vis[x]){
	            dfs(x, adj, vis);
	        }
	    }
	    s.push(src);
	}
	vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    // code here
	   // using dfs traversal
	   vector<int> vis(V, 0);
	   vector<int> ans(V, 0);
	   
	   for(int i = 0; i < V; i++){
	       if(!vis[i]){
	           dfs(i, adj, vis);
	       }
	   }
	   
	   for(int i = 0; i < V; i++){
	       int top = s.top();
	       ans[i] = top;
	       s.pop();
	   }
	   
	   return ans;
	}
};
