#include<bits/stdc++.h>
using namespace std;

int ceiling(int arr[],int l,int r,int k)
{
    if(k<= arr[l])
      return l;
    if(k>arr[r])
      return -1;
    int mid= l+ (r- l)/2; 
    if(r>=l){
     
     if(arr[mid] ==k)
        return mid;
    
     else if(arr[mid]< k) //shift right
     {
        if(mid + 1 <= r && k <= arr[mid + 1])
            return mid + 1;
            return ceiling(arr,mid+ 1,r,k);
     }
     if(arr[mid] >k)  //shift left
     {
        if(mid - 1 >=l && k> arr[mid - 1])
            return mid;
        else
            return ceiling(arr,l,mid - 1,k);
     }
    }
}

int flooring(int arr[],int l,int r,int k)
{
    
    if (k >= arr[r])
        return r;
    if(k < arr[0])
        return -1;
    int mid= l+ (r- l)/2;
    if(r>=l){
    if (arr[mid] ==k)
       return mid;
    if (mid > 0 && arr[mid- 1]<=k && arr[mid]>k)//b/w mid-1 and mid
        return mid - 1;             
 
    if (k < arr[mid])
        return flooring(arr,l,mid - 1,k);
    if(k > arr[mid])
        return flooring(arr,mid+ 1,r,k );
    }
    return mid;
}

int main()
{
    int arr[]= {3,6,9,1,4,7};  int k;
    int size= sizeof(arr) / sizeof(arr[0]);
    sort(arr,arr+size);
    cout<<"Sorted array: ";
    for(int i=0;i<size;i++)
      cout<< arr[i]<<" ";
    
    cout<<"\n\nEnter the element: ";  cin>>k;
    int x=ceiling(arr,0,size- 1,k);
    if(x!=-1)
      cout<<"Ceiling of "<<k<<" is: index " <<x<<"-> element "<<arr[x]<<endl;
    else  
      cout << "Ceiling doesn't exist"<<endl;
      
    sort(arr,arr+size);
    int y=flooring(arr,0,size- 1, k);
    if(y!=-1)
      cout<<"Floor of "<<k<<"is: index"<<y<<"-> element "<<arr[y]<<endl;
    else  
      cout << "Floor doesn't exist"<<endl;
}
      
