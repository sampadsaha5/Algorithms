#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int r,x,y,a,b;
    cin >> r >> x >> y >> a >> b;
    double d=0.0;
    long long int i = (x-a);
    long long int j = (y-b);
    
    d=sqrt(i*i+j*j);
    d=d/(2*r);
    cout << ceil(d) <<endl;
    

   
   
    return 0;
}
