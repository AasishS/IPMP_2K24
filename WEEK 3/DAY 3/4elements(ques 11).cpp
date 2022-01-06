#include<bits/stdc++.h>
using namespace std;

void fourelements(int arr[],int n,int sum)
{
    unordered_map<int,pair<int,int>> m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i!=j)
             m.insert({arr[i]+arr[j],{i,j}});
        }          
    }

 unordered_map<int,pair<int,int>>:: iterator it;
 
     for(it=m.begin();it!=m.end();it++)
     {
         int x=sum-(it->first);
         
         if(m.find(x)!=m.end()){
             int a= m[x].first; int b=m[x].second;
             int c= m[sum-x].first;  int d=m[sum-x].second;
             
             if(a!=c && a!=d && b!=c && b!=d) { //to avoid repeting elements
             cout<<arr[a]<<" "<<arr[b]<<" ";
             cout<<arr[c]<<" "<<arr[d]<<" "<<endl;
             }
         }
           
     }
}
int main()
{
    int arr[]={ 1, 4, 45, 6, 15,7, 3, 10, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum; cout<<"Sum: "; cin>>sum;
     //driver code
    fourelements(arr,n,sum);
}    