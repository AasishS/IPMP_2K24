#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v ={ 3,9,1,6,8,4,7 };
    int size= v.size();
    
    cout<<"Initial array: ";
    for(auto i:v)
      cout<<i<<" ";
  //Seleccion sort
     for(int i=0; i<size; i++) 
     {
         for(int j=i+1; j<size; j++)
          {
              if(v[j]< v[i])
                 swap(v[j],v[i]);
          }
     }
 
     cout<<"\nSorteed array: ";
     for(auto i:v)
       cout<<i<<" ";
}