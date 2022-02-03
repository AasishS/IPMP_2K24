#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter string:";
    string s;  cin>>s;  int n=s.size();
    
    set<char> t1;  
    char c= s[n-1];
    for(int i=s.size()-1; i>=0;i--)
    {
        if( t1.find(s[i])== t1.end() ){
            c=s[i];
            t1.insert(s[i]);
        }

    }

    cout<<"1st unique elm:"<<c;
}