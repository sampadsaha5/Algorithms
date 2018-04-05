#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int count=0,last=n;
    for(int i=0;i<n;i++){
        cin >> a[i];
        if(i!=0){
            if(a[i]<a[i-1]){
                count++;
                last=i;
            }
        }
    }
    if(count==0){
        cout << "0" << endl;
    }else if(count == 1 && a[n-1] <= a[0]){
        cout << n-last << endl;
    }else{
        cout << "-1" << endl;
    }
    return 0;
}