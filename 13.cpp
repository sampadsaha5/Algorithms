#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,y;
    cin >> x >> y;
    int n;
    cin >> n;
    vector<int> a(7);
    a[1]=x;
    a[2]=y;
    for(int i=3;i<7;i++){
        a[i]=a[i-1]-a[i-2];
    }
    a[0]=a[6];
    cout << ((a[n%6] % 1000000007) + 1000000007) % 1000000007 << endl;
    return 0;
}