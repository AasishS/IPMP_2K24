#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cout<<"size:"; cin>>n;
    int d; cout<<"index: "; cin>>d;
    cout<<"array: ";
    int arr[]=new int[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

//swap n-d times
    for(int i=d;i<n;i++)
      swap(arr[i],arr[i-d]);

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";

}