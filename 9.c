#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
   cin >> s;
   int count=0;
   int last=0;
   int n=s.size();
   int flag=0;
   for(int i=0;i<n-1;i++){
       if(int(s[i])%2==0){
           last=i;
           count++;
           if(s[n-1]>s[i]){
               swap(s[i],s[n-1]);
               flag=1;
               break;
           }
       }
   }
   if(count==0){
       cout<<"-1"<<endl;
       return 0;       
   }
   if(flag==0){
       swap(s[last],s[n-1]);
   }
   for(int i=0;i<n;i++){
       cout<<s[i];
   }
   cout<<endl;

   
   
   return 0;
}
