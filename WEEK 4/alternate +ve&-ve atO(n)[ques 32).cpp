#include<bits/stdc++.h>
using namespace std;

//Doesnt maintain order but O(n)
int main()
{
    int arr[]= {-1, -2, -3, 4, 5, 6, 8,-7, 9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int i=1,k=1;
    while(i<n-1 && k<n)
    {
        if(arr[i]*arr[i-1]<0){
            i++;
            k=i;
        }
        else if(arr[i-1]*arr[k]<0){
            swap(arr[i],arr[k]);
            continue;
        }  
        else {
            k++;
        }
        
    }
    for(int j=0;j<n;j++)
      cout<<arr[j]<<" ";
}

//Maintains order but O(n2)
/*
while(i<n-1 && k<n)
    {
        if(arr[i]*arr[i-1]<0){
            i++;
            k=i;
        }
        else if(arr[i-1]*arr[k]<0){
        while(i<k){    
            int t=arr[k];
            arr[k]=arr[k-1];
            arr[k-1]=t; k--;
        }  
            continue;
        }
        else {
            k++;
        }        
    }
    */