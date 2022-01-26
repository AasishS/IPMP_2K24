#include<bits/stdc++.h>
using namespace std;

void findinversion(int arr[],int l,int r,int inv)
{

   if(l<=r)
   {
      if((r-l)==1){
          if(arr[l]>arr[r])
            inv++;
      }
      if(l==r){
          
      }
      else{
          int mid=(r+l)/2;
          if(arr[mid]>arr[mid+1])
            inv++;
          if(arr[mid]<arr[mid-1])
            inv++;
            
           findinversion(arr,l,mid-1,inv);
           findinversion(arr,mid+1,r,inv);
      }
        
   }
   else
       cout<< inv;
       
}
int main()
{
    int arr[]={3, 0, 2, 3, 4};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<"no of inversions:";
    findinversion(arr,0,n,0);
}
