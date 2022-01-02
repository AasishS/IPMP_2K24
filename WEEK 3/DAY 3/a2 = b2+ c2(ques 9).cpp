#include<bits/stdc++.h>
#include<math.h>
using namespace std;

void findtriplets(int arr[],int n)
{
    for(int i=0;i<n; i++)
       arr[i]= arr[i]* arr[i];
    
    set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(arr[i]);
        int sum= arr[i];  
        for(int j=0;j<n;j++)
        {
            int p= sum-arr[j];
            if(s.find(p)!=s.end() && i!=j)
               cout<<sum<<"="<<p<<"+"<<arr[j]<<"("<<sqrt(sum)<<","<<sqrt(p)<<","<<sqrt(arr[j])<<")"<<endl;
        }
          
    }   
}

int main()
{
    int arr[]= { 1,2,3,4,5,6 };
    int n= sizeof(arr)/ sizeof(arr[0]);
    findtriplets(arr,n);
}