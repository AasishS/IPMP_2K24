#include<bits/stdc++.h>
using namespace std;

int* productarray(int v[],int n)
{
    int *l= new int[n*sizeof(int)];
    int *r= new int[n*sizeof(int)];
    int *prod= new int[n*sizeof(int)];

    l[0]=1; r[n-1]=1;

    for(int i=1;i<n;i++)
       l[i]=l[i-1]*v[i-1];
    for(int i=n-2;i>=0;i--)
       r[i]=r[i+1]*v[i+1];

    for(int i=0;i<n;i++)
       prod[i]= l[i]*r[i]; 

    return prod;          

}
int main()
{
    int v[] = { 2,3,4,5,6 };
    int n = sizeof(v) / sizeof(v[0]);
    int *result=productarray(v,n);
    for(int i=0;i<n;i++)
       cout<<result[i]<<" ";
}