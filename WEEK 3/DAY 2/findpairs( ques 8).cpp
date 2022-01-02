#include<bits/stdc++.h>
using namespace std;

void findpairs(int arr[],int n,int x)
{
    unordered_set<int> s;
    cout<<"pairs: ";
    for(int i=0;i<n; i++)
    {
        s.insert(arr[i]);
        int p= x- arr[i];
        if(s.find(p)!=s.end())
          cout<<"("<<p<<","<<arr[i]<<")"<<" ";
    }
}
int main()
{
    int arr[]= { 1,2,3,4,5,6 };
    int n= sizeof(arr)/ sizeof(arr[0]);
    int x; cout<<"Enter the sum:"; cin>>x;
    findpairs(arr,n,x);
}