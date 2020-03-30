#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix(int n){
    vector<vector<int> > A (n, vector<int> (n,0));

    int cnt = 0, num = 1;
    int a = 0, d = 0, b = n-1, c = n-1;

    while (cnt < n*n){

        for (int i = a; i <= b; i++){
            A[a][i] = num++;
            cnt++;
        }
        a++;

        for (int i = a; i <= c; i++){
            A[i][b] = num++;
            cnt++;
        }
        b--;

        for (int i = b; i >= d; i--){
            A[c][i] = num++;
            cnt++;
        }
        c--;

        for (int i = c; i >= a; i--){
            A[i][d] = num++;
            cnt++;
        }
        d++;

    }


    return A;
}

int main(){

    int n = 5;

    vector<vector<int> > ans = spiralMatrix(n);

    for (int i = 0; i < n; i++){
        for (int j= 0; j < n; j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }   



    return 0;
}

