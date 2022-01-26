#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={0, 1, 0, 1, 0, 0, 1, 1, 1, 0};
    int n=sizeof(arr)/sizeof(arr[0]);
 //pointer method
    int i=n-1,j=0;  
    while(j<i)
    {
        if(arr[i]==0){
            i--; 
            continue;
        }
        if(arr[j]!=0){
            j++;
            continue;
        }
        
        if(j<i){
            swap(arr[i],arr[j]);
        }
    } 

    for(i=0;i<n;i++)
      cout<<arr[i]<<" ";
}