#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int k)
{
    if(r>=l)
    {
        int mid= l+ (r-l)/2;
        if(k== arr[mid]) 
          return mid;
        if(k> arr[mid])
          return binarysearch(arr ,mid+1, r, k );
        if(k < arr[mid])
          return binarysearch(arr, l,mid-1 , k );
    }
    else
      return -1;
}

int main()
{
    //Binary Search using recursion

    int arr1[]={ 11,5,7,3,9,1,2 };   int x;
    int size = sizeof(arr1)/sizeof(arr1[0]); 

    sort(arr1, arr1+size);
    cout<<"\nSorted array1: ";
    for(int i=0;i<size;i++)
      cout<<arr1[i]<<" ";
    
    cout<<"\nEnter the element to find in arr1: "; cin>>x;
    int k= binarysearch(arr1 ,0,size-1 , x );
    if(k== -1)
      cout<<"Element not present"<<endl;
     else
      cout<<x<<" is present at index "<< k+1<<endl; 

    //Binary search in STL

    array<int,6> arr2{ 4, 7,2, 9,22, 11};   int y;
    size= arr2.size();
    sort(arr2.begin(), arr2.end());
    cout<<"\nSorted array2: ";
    for(auto i: arr2)
      cout<<i<<" ";
    
    cout<<"\nEnter the element to find in arr2"; cin>>y;
    if(binary_search(arr2.begin(), arr2.end(), y))
       cout<<y<<" is present in arr2";
    else
      cout<<"Element not preset";   
}