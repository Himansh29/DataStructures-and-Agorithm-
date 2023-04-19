#include<bits/stdc++.h>
using namespace std;
int main()
{
    // dynamic array

    // int n;
    // cout << "Enter the valur of n: ";
    // cin >> n;
    // int *arr = new int[n];

    // for(int i = 0; i<n; i++) {
    //     cin >> arr[i];
    // }

    // for(int i = 0; i<n; i++) {
    //     cout << arr[i] << " ";
    // }

    // delete []arr;

    int n,m;
    cin >> m >> n;
    int **arr = new int*[m];

    for(int i = 0; i<m; i++) {
        arr[i] = new int[n];
    }

    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i<m; i++) {
        for(int j = 0; j<n; j++) {
            cout <<  arr[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i<m; i++) {
        delete []arr[i];
    }

    



    return 0;
}