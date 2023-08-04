class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int len = graph.size();

        vector<int> v(len);
        
        // for loop is for disconnected graph

        for(int i = 0; i < len; i++){
            if(v[i] == 1 || v[i] == -1){
                continue;
            }

            queue<int> q;
            q.push(i);
            v[i] = 1;

            while(!q.empty()){
                int front = q.front();
                q.pop();

                for(auto x : graph[front]){
                    if(v[x] == 0){
                        v[x] = -v[front];
                        q.push(x);
                    }
                if(v[x] == v[front]){
                    return false;
                }
                }
            }
        }
            return true;
    }
};
