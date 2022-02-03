#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void findnonrep(string str)
{
    int n=str.size();
    unordered_map<char,int> m;
    for(int i=0; i<n; i++)
       m[str[i]]++;
       
    unordered_map<char,int>:: iterator it;
    for(it= m.begin(); it!= m.end(); it++)
    {
        if(it->second==1)
           cout<<it->first<<" ";
    }
}
int main()
{
    cout<<"enter string:";
    string s;  cin>>s;
    cout<<"non rep string: ";
    
    findnonrep(s);
    return 0;
}
