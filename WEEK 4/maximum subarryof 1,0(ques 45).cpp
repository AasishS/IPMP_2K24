#include<bits/stdc++.h>
using namespace std;

void findsubarray(int arr[],int n,int sum)
{
    int i=0,j=n-1;   int flag;
    while(1)
    {
       if(sum>0 && arr[j]>0){
           sum-=arr[j];  j--;
       }
       if(sum>0 && arr[i]>0){
           sum-= arr[i];  i++;
       }
       if(sum<0 && arr[i]<0){
           sum-= arr[i];  i++;
       }
       if(sum<0 && arr[j]<0){
           sum-= arr[j];  j--;
       }
       if(sum==0 && i<j){
           flag=1; break; 
       }
       if(sum>0 && arr[i]<0 && arr[j]<0){
           sum=sum-arr[i]; i++;
       }
       if(i>=j){
           flag=0; break;
       }
    }
    
    if(flag==1)
    {
    cout<<"index from "<<i <<" to "<<j<<endl;   
        for(i;i<=j;i++){
            if(arr[i]==-1)
              arr[i]=0;
        
           cout<<arr[i]<<" ";
    }}
}
int main()
{
    int arr[] = { 1, 1, 1, 1, 1, 0, 0 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
          arr[i] = -1;

        sum +=  arr[i]; 
    }
    if(sum==0){
        cout<<"complete array"<<endl;
    }
    else if(sum==n || (sum+n)==0)
       cout<<"no subarrays"<<endl;
    else
     findsubarray(arr,n,sum);
}