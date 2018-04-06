#include <bits/stdc++.h>

using namespace std;


bool isSub(string s, string t){
    if(s.size()<t.size())
        return false;
    int i=0,j=0;
    while(i<s.size()){
        if(s[i]==t[j]){
            j++;
        }
        i++;
        if(j==t.size())
            return true;
    }
    return false;
}

bool eno(string s, string t){
    if(s.size()<t.size())
        return false;
    vector<int> initial(26);
    vector<int> end(26);
    for(int i=0;i<s.size();i++)
        initial[s[i]-'a']++;
    for(int i=0;i<t.size();i++)
        end[t[i]-'a']++;
        
    for(int i=0;i<26;i++){
        if(initial[i]<end[i])
            return false;
    }
    return true;
}
int main()
{
    string s,t;
    cin >> s;
    cin >> t;
    if(isSub(s,t))
        cout << "automaton" << endl;
    else if(eno(s,t)){
        if(s.size()==t.size())
            cout << "array" << endl;
        else
            cout << "both" << endl;
    }
    else 
        cout << "need tree" << endl;
        
    return 0;
}