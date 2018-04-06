#include <bits/stdc++.h>

using namespace std;

int main()
{
   
   int n;
   cin >> n;
   vector<int> a(n);
   for(int i=0;i<n;i++){
       cin >> a[i];
   }
   long long int count=a[0]+1;
   for(int i=1;i<n;i++){
        count+=abs(a[i-1]-a[i])+2;
   }
   cout << count << endl;
   return 0;
}