#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void print(string str,int l,int r)
{
    string s=str;
    int n=str.size();
    int k=0;
    if(n<1)
      return;
    else
    {  
    for(int i=r; i>=l;i--)
      {
          if(str[i]==' '){ 
               k=i;  break;
          }
    }
    
    for(int i=k; i<=r; i++)
       cout<<str[i];
       cout<<" ";
       
       str= str.substr(0,k);
       print(str,0,k);
    }
}

int main()
{
    string str="Hello World welcomes Manish Kalya";
    int n=str.size();
    print(str,0,n-1);

    return 0;
}

