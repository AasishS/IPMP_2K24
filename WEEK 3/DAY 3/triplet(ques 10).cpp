//2 pointer method

#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v={ 1, 4, 45, 6, 15, 7,3, 10, 8 };
    int n=v.size();
    int sum; cout<<"Sum: "; cin>>sum;
//At constan space compelexity
    sort(v.begin(),v.end());
    //duplicate
      vector<int> ::iterator ip= unique(v.begin(),v.end());
      v.resize(distance(v.begin(),ip));

    for(int i=0;i<n;i++)
    {
        int x= sum-v[i];
        
            int l=i+1;
            int r=n-1;
        while(l<r){
            if(v[l]+v[r]==x){
              cout<<v[i]<<','<<v[l]<<","<<v[r]<<endl;
              l++; r--;
            }
            else if(v[l]+v[r]>x)
              r--;
            else if(v[r]+v[l]<x)
             l++;    
        } 
    }    
}