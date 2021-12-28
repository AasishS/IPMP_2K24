#include <bits/stdc++.h>
using namespace std;

void findmissing(array<int,5> arr) //bitwise
{
    int x1= arr[0]; int x2=1;
    int n= arr.size();
    for(int i=1;i<n;i++)
      x1=x1^arr[i];
    for(int i=2;i<=n+1;i++)
      x2= x2^i;
      
    int x= x1^x2;
    cout<<"missing: "<<x<<endl;
}

int find(vector<int> arr,int x,int sum) 
{    
   if(x<0) 
    return sum;
   else {
    sum=sum-arr[x];   
    return find(arr,x-1,sum);
   }
}

int main()
{
    vector<int> arr= {1,2,3,4,5,6,7};
    array<int, 5> arr1 = {1,2,3,4};
    int n= arr.size();int i;
        
 //direct method   
    for(i=0;i<n;i++)
    {
        if(arr[i]!=i+1)
           break;
    }
    cout<<"missing: "<<i+1<<endl;

 //bitwise op
    findmissing(arr1);
 //recursion
    int sum= (n+2)*(n+1)/2;
    int miss= find(arr,n,sum);   
    cout<<"missing: "<<miss;
}