#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int k;
    cin >> k;
    int a[26];
    int max=0;
    for(int i=0;i<26;i++){
        cin>>a[i];
        if(a[i]>max)
            max=a[i];
    }
    long long int count=0;
    int n=s.size();
    int i=1;
    for(;i<=n;i++){
        count+=i*a[s[i-1]-'a'];
    }
    while(i<=n+k){
        count+=i*max;
        i++;
    }

    cout << count << endl;
    

   
   
    return 0;
}
