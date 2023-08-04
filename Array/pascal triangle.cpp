/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class solution{
    public : 
    int pascle(int r, int c){
        int ans = 1;
        for(int i = 1; i <= c; i++){
            ans = ans * r;
            r--;
            ans = ans / i;
        }
    return ans;
    }
    // print entire row 
    void printRow(int r, int c){
        vector<int> ans(c, 1);
        
        int an = 1;
        
        for(int i = 1; i < c; i++){
            r--;
            an = an * r;
            // n--;
            an = an / i;
            ans[i] = an;
        }
        cout << endl;
        for(int i = 0; i < c; i++){
        cout << ans[i] << " , " << endl;
    }
    }
};

int main()
{
    int r;
    int c;
    
    cout << "Enter r and c : " << endl;
    cin >> r >> c;
    
    solution s;
    int ans = s.pascle(r, c);
    cout << "ans is : " << ans;
    
    s.printRow(r, c);
    
    
    

    return 0;
}
