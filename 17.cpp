#include <bits/stdc++.h>

using namespace std;



int main()
{
    int a[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin >> a[i][j];
        }
    }
    int x = a[2][0] + a[2][1]/2 - a[0][1]/2;
    int z = a[0][2] + a[0][1]/2 - a[2][1]/2;
    int y = a[1][2] + z - a[2][0];
    a[0][0] = x;
    a[1][1] = y;
    a[2][2] = z;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}