#include<bits/stdc++.h>
using namespace std;

void findnonrep(array<int,8> arr)
{
   map<int,int> m;  //key-element.  second-occurences
   for(int i=0;i<8;i++)
     m[arr[i]]++;

   map<int,int>:: iterator itr= m.begin();
   for(itr;itr!=m.end();itr++)
    {
        if(itr->second==1)
          cout<<itr->first<<" ";
    }  
}

int main()
{
    array<int,8> arr= { 2,2,3,4,5,5,6,7 };
    cout<<"Non repeating: ";
    findnonrep(arr);
}