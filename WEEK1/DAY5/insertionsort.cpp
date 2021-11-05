#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v ={ 3,1,6,8,4,7 };
    int size= v.size();   
    cout<<"Initial array: ";
    for(auto i:v)
      cout<<i<<" ";

  //Insertion sort
    for (int i=1; i<size; i++)
    {
       int key = v[i];
       int j = i- 1;
       while (key<v[j] && j>= 0) 
       {
          v[j+1]= v[j];
          --j;
       }
       v[j+1] = key;
    }

 
     cout<<"\nSorteed array: ";
     for(auto i:v)
       cout<<i<<" ";
}
