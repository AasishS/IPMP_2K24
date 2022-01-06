#include<bits/stdc++.h>
using namespace std;

int findmissing(int arr[],int i,int n)
{
    int ans=1;
    for(i;i<n;i++){
        if(arr[i]==ans && arr[i]>0)
          ans=ans+1;
        else if(arr[i]!=ans && arr[i]>0)
          break; 
          
    }
    return ans;
}

int main()
{
    int arr[]={ 3, -7, 6, 8,1,2, -10, 15 };
    int n= sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int k=findmissing(arr,0,n);
    cout<<"missing element: "<<k;
}