#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[]={ 1,7,3,6,5,6 };
    int n= sizeof(arr)/sizeof(arr[0]);
     cout<<"ans: ";
     
    int i,flag=0;  int sum=0,sum_l=0;

    for(i=0;i<n;i++)
      sum+= arr[i];
    
    for(i=0; i<n; i++)
    {
        if(sum_l== (sum- sum_l-arr[i])){
            cout<<i<<" ";
            flag=1;
        }
           
           sum_l+=arr[i]; 
    }
    
    if(flag==0)
      cout<<"\nNo such points";
return 0;      
}