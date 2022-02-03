#include <bits/stdc++.h>
#include <string>
using namespace std;

void reverse(string str)
{
    int n= str.size();
    
    if(n==1){
      cout<<str[0];  
      return;
    }
    else { 
      cout<<str[n-1];
      reverse(str.substr(0,n-1));
    }
}

int main()
{
    string s;
    cout<<"Enter the string : ";
    cin>>s;
 
    cout<<"\nreversed: ";
    reverse(s);
    return 0;
}
