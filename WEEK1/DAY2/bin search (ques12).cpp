#include <bits/stdc++.h>
using namespace std;

int min(int arr[],int l,int r)
{
    int mid= l+ (r-l)/2;
    if(r>l){    
    if(arr[mid]<arr[mid+ 1] && arr[mid]<arr[mid- 1])
       return mid;
    if(arr[mid]<arr[mid+ 1] && arr[mid]>arr[mid- 1] && arr[mid]<arr[r] )
       return min(arr,l, mid-1);      //left of mid
    else if(arr[mid]<arr[mid+ 1] && arr[mid]>arr[mid- 1] && arr[mid]>arr[r])   
       return min(arr,mid+1,r) ;    //right of mid
    }
    else
      return l;
}
int main()
{
    int arr[]= {7,9,11,13,15,5};
    int size = sizeof(arr)/sizeof(arr[0]);

    int n= min(arr,0,size-1);
    cout<<"Minimum element: "<< arr[n];
}
    