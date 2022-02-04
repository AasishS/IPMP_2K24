#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"string1:";
    string s1;  cin>>s1;  int n1=s1.size();
    cout<<"string2:";
    string s2;  cin>>s2;  int n2=s2.size();

   // cout<<*(s2.end());
   string::iterator it;
    for(it=s1.begin(); it!=s1.end(); it++)
    {
        char c=*(it);
        if(s2.find(c) != string::npos)
         {
             s1.erase(it);
             it--;
         } 
    }

    cout<<s1;
}