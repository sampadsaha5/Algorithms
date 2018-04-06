#include <bits/stdc++.h>

using namespace std;

int main()
{
   
    int n,s,t;
    cin >> n >> s >> t;
    vector<int> a(n+1);
    for(int i=1;i<=n;i++)
        cin >> a[i];
    long long int count = 0;
    int p = s;
    while(p!=t){
        count++;
        p=a[p];
        if(p==s)
            break;
    }
    if(p==t)
        cout << count << endl;
    else
        cout << -1 << endl;
    return 0;
}