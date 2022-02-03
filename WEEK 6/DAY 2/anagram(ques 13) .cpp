#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"string1:";
    string s1;  cin>>s1;  int n1=s1.size();
    cout<<"string2:";
    string s2;  cin>>s2;  int n2=s2.size();
    
    if(n1!=n2){
     cout<<"not anagram";  return 0 ;}

    unordered_map<char,int> m;
    for(int i=0; i<n1; i++ )
    {
        m[s1[i]]++;     m[s2[i]]--;
    }
    
    unordered_map<char,int>:: iterator it;
    for(it=m.begin(); it!= m.end(); it++)
    {
        if(it->second!=0){
          cout<<"not anagram"; 
          return 0; }
    }
    cout<<"its anagram";
}    