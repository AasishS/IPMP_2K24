#include <bits/stdc++.h>
using namespace std;

int max(int arr[],int l,int r)
{
    int mid= l+ (r-l)/2;

    if(arr[mid]>arr[mid+ 1] && arr[mid]>arr[mid- 1])
       return mid;
    if(arr[mid]>arr[mid+ 1] && arr[mid]<arr[mid- 1])
       return max(arr,l,mid-1)      //left of mid
    if(arr[mid]<arr[mid+ 1] && arr[mid]>arr[mid- 1])   
       return max(arr,mid+1,r)     //right of mid
}
int main()
{
    int arr[]= {2,8,10,12,15,9,4,1};
    int size= sizeof(arr)/sizeof(arr[0]);

    int n= max(arr,0,size-1);
    cout<<"Max element: "<<arr[n];
}