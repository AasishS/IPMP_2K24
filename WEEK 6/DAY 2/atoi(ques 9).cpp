#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"enter string:";
    string s;  cin>>s;
    int num=0;

    for(int i=0; i<s.size() ; i++)
    {
        if(!isalpha(s[i]))  {
          int x= s[i] -'0';
          num= num*10 + x;
        }
        if(isalpha(s[i])){
            cout<<"not a num";
            return 0;
        }
    }

    cout<<"num is "<<num;
}