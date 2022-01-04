#include<bits/stdc++.h>
using namespace std;

void findmaxdiff(int arr[],int n)
{
    int max_diff= arr[1]-arr[0];
    int min_element= arr[0]; int x;

    for(int i=1;i<n;i++)
    {
        if(arr[i]-min_element >max_diff){
          max_diff=arr[i]-min_element;  
          x=i;
        }
          if(arr[i]<min_element)
            min_element=arr[i];  
    }

    cout<<"maximum difference:"<<max_diff<<"\t";
    cout<<"elements: "<<min_element<<" "<<arr[x];
}

int main()
{
    int arr[]= { 2,8,6,7,11,5 };
    int n= sizeof(arr)/sizeof(arr[0]);
    findmaxdiff(arr,n);
}