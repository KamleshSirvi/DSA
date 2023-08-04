#include <bits/stdc++.h> 

void createAdjList(unordered_map<int, set<int>> &adjList, vector<pair<int, int>> &edges){
    for(int i = 0; i < edges.size(); i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].insert(v);
        adjList[v].insert(u);

    }
}

void bfs(unordered_map<int, set<int>> &adjList, unordered_map<int, bool> &visited, vector<int> &ans, int node){
    queue<int> q;

    q.push(node);

    visited[node] = 1;

    while(!q.empty()){
        int front = q.front();
        q.pop();

        ans.push_back(front);

        // push all neighbour of front node into queue
        for(auto x : adjList[front]){
            if(!visited[x]){
                q.push(x);
                visited[x] = 1;
            }
        }

    }
}

vector<int> BFS(int vertex, vector<pair<int, int>> edges)
{
    // Write your code here
    // first create adjList
    unordered_map<int, set<int>> adjList;

    createAdjList(adjList, edges);

    vector<int> ans;

    unordered_map<int, bool> visited;

    // this is disconnected graph so we have to travese for whole nodes
    for(int i = 0; i < vertex; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }

    return ans;

    
}
