#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={ -2,-8,6,7,11,-5 }; 
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    
    int min= INT_MAX,x,y;
    for(int i=1;i<n;i++)
     {
         if(arr[i]-arr[i-1]<min){
           min=arr[i]-arr[i-1];
           x=i;y=i-1;}
     }  
     
     cout<<"elements:"<<arr[x]<<","<<arr[y]<<"\t";
     cout<<"difference:"<<arr[x]-arr[y];
}