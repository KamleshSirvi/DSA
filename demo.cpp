#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> demo(int N, vector<int> val, int Q, vector<vector<int>> query){
    vector<int> v;

    for(int i = 0; i < Q; i++){
        if(query[i][0] == 0){   
            int x = query[i][1]-1;
            int res = val[query[i][1]-1];
            int y = query[i][2];
            int i = 2;
            while(y+x < N){
                res = res + val[x+y];
                y = y * i;
                i++;
            }
            v.push_back(res);
        }else if(query[i][0] == 1){
            int x = query[i][1]-1;
            int res = val[query[i][1]-1];
            int y = query[i][2];
            int i = 2;
            while(y+x < N){
                res = res * val[x+y];
                cout << "x + y " << (x+y) << endl; 
                cout << "res : " << res << endl;
                y = y * i;
                i++;
            }
            v.push_back(res);
        }
    }
    return v;
}

int main(){
    vector<int> val;
    int n;
    cout << "enter n : ";
    cin >> n;
    for(int i = 0; i < n ; i++){
        int x;
        cout << "enter x : ";
        cin >> x;
        val.push_back(x); 
    }

    vector<vector<int>> ans;
    int q;
    cout << "enter q : ";
    cin>> q;

    for(int i = 0; i < q; i++){
        vector<int> v;
        
        int x;
        int y, z;
        cout << "enter x, y, z : ";
        cin >> x >> y >> z;
        v.push_back(x);
        v.push_back(y);
        v.push_back(z);
    
        ans.push_back(v);
    }

    vector<int> res;
    res = demo(n,  val, q,ans);

    for(int i = 0; i < q; i++){
        cout << res[i] << endl;
    }

    return 0;
}