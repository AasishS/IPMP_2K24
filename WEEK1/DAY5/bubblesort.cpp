#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v ={ 7,11,4,6,20,14 };
    int size= v.size();
    
    cout<<"Initial array: ";
    for(auto i:v)
      cout<<i<<" ";
  //Bubble sort
     for(int i=0; i<size; i++) 
     {
         for(int j=0; j<size-i-1; j++)
          {
              if(v[j]> v[j+1])
                 swap(v[j],v[j+1]);
          }
     }
 
     cout<<"\nSorteed array: ";
     for(auto i:v)
       cout<<i<<" ";
}