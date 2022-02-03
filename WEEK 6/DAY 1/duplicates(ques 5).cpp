#include <bits/stdc++.h>
#include<string>
using namespace std;

void findduplicate(string str)
{
    int n= str.size();
    int i=0;

    while(n>1)
    {
        char c=str[i];
        str=str.substr(i+1);
        if(str.find(c)<n )
          cout<< c<<" ";
          
        n= str.size();  
    }
}
int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;

    cout<<"duplicates: ";
    findduplicate(s);
}