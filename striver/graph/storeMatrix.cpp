#include <iostream>

using namespace std;

class graph{
    public:
    int matrix[6][6] = {0};

    void fillMatrix(int u, int v, int weight){
        matrix[u][v] = weight;
        matrix[v][u] = weight;
    }

    void printMatrix(){
        for(int i = 0; i < 6; i++){
            for(int j = 0; j < 6; j++){
                cout << matrix[i][j] << " , ";
            }
            cout << endl;
        }
    }

};

int main() {
    int n;
    cout << "Enter number of nodes : " << endl;
    cin >> n;

    int m;
    cout << "Enter number of Edges : " << endl;
    cin >> m;
    // int matrix[n][n] = {0};

    graph g;

    for(int i =0; i < m; i++){
        int u, v;
        cin >> u >> v;
        int weight;
        cin >> weight ;
        g.fillMatrix(u, v, weight);
    }

    g.printMatrix();

    // g.fillMatrix(matrix, u, v);


    return 0;
}