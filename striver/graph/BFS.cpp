#include <iostream>
#include <unordered_map>
#include <vector>
#include <queue>
using namespace std;

class graph{
    public: 
    unordered_map<int, vector<int>> mp;

    void createGraph(int u, int v){
        mp[u].push_back(v);
        mp[v].push_back(u);
    }

    void printGraph(){
        int i = 1;
        for(auto x : mp){
            cout << x.first << " -> ";
            for(auto y : x.second){
                cout << y << "  ";
            }
            cout << endl;
            cout << i << endl;
            i++;
        }
        cout << "Success : " << endl;
    }

    void bfs(int n){
        vector<int> visited(n, 0);
        vector<int> ans;

        queue<int> q;

        // for(int i = 1; i < n; i++){
            // cout << "for  " << i << endl;
            // if(!visited[i]){
                q.push(1);
                // ans.push_back(i);
                visited[1] = 1;

                while(!q.empty()){
                    int front = q.front();
                    q.pop();
                    cout << "front : " << front << endl;
                    ans.push_back(front);
                    for(auto x : mp[front]){
                        if(!visited[x]){
                            q.push(x);
                            visited[x] = 1;
                        }
                    }
                // }
            // }
        }
        
        cout << endl;
        cout << "print the bfs : " << endl;
        for(int i = 0; i < n-1; i++){
            cout << ans[i] << endl;
        }
    }

};

int main(){
    int n, m;

    cout << "Enter the number of Nodes : " << endl;
    cin >> n;

    cout << "Enter the number of Edges : " << endl;
    cin >> m;

    graph g;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.createGraph(u, v);
    }

    g.printGraph();

    g.bfs(n);

    cout << "Program ends here : ";

    return 0;
}