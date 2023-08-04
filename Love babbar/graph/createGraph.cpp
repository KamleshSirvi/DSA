#include <iostream>
#include <unordered_map>
#include <vector>
#include <list>

using namespace std;

class graphList{
    public: 
    unordered_map<int, list<int>> mp;

    // method for create graph
    void addEdge(int u, int v, bool direction){
        // directed graph -> 1
        // undirected graph -> 0

        // create an edge for u to v
        // for directed graph
        mp[u].push_back(v);

        // if graph is undirected then 

        if(direction == 0){
            mp[v].push_back(u);
        }
    }

    // print the graph

    void printGraph(){
        for(auto x : mp){
            cout << x.first << " -> ";
            for(auto y : x.second){
                cout << y << " , ";
            }
            cout << endl;
        }
    }
};

class graphMatrix{
    public: 
    int matrix[5][5] = {0};

    void createMatrix(int u, int v, bool direction){
        matrix[u][v] = 1;

        if(direction == 0){
            matrix[v][u] = 1;
        }
    }

    void printMatrix(){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 5; j++){
                cout << matrix[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

int main(){
    int n;
    cout << "Enter the number of nodes : " << endl;
    cin >> n;

    int m;
    cout << "Enter the number of Edges : " << endl;
    cin >> m;

    // create an object of graph class
    graphList g;
    graphMatrix g2;

    for(int i = 0; i < m; i++){
        int u, v;
        cin >> u >> v;
        g.addEdge(u, v, 0);
        g2.createMatrix(u, v, 0);
    }

    // print the list

    // g.printGraph();

    // for matrix

    // graphMatrix g2;

    // for(int i = 0; i < m; i++){
    //     int u, v;
    //     cin >> u >> v;
    //     g2.createMatrix(u, v, 0);
    // }

    cout << "print List : " << endl;
    g.printGraph();
    cout << "print matrix : " << endl;
    g2.printMatrix();



    return 0;
}
