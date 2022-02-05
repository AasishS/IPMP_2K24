#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter string: ";
    string str;  cin>>str;

    string::iterator it;
    it= str.begin();
    string s1,s2;

    for(it; it!=str.end(); it++)
    {
        char c= *(it);
        if(s1.find(c)== string::npos){
            s1.push_back(c);
        }
        else{
            if(s1.length()>s2.length())
               s2=s1;

            str=str.substr(str.find(c)+1,str.size());
            it=str.begin();
            s1.clear();
        }
    }  
    
    cout<<"longest substring\n";
    if(s2.size()>s1.size())
     cout<<s2<<"-"<<s2.size();
    else
     cout<<s1<<"-"<<s1.size();
}
