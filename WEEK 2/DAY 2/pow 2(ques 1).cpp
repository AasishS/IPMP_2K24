#include <bits/stdc++.h>
using namespace std;

bool ispower2(int x)
{
    if((x &(x-1))==0)
     return true;
    else
     return false;
}

int main()
{
//Using logics    
    int k;
    cout<<"Enter the no: "; cin>>k;
    if(ispower2(k))
      cout<<"Its power of 2"<<endl;
    else
      cout<<"not power of 2"<<endl;
      
//Counting std 
    cout<<"Enter the no: "; cin>>k;
    if(__builtin_popcount(k)==1)
      cout<<"Its power of 2"<<endl;
    else
      cout<<"Not power of 2";
    
return 0;
}
 
