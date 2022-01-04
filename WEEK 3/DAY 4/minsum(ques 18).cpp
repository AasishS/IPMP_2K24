#include<bits/stdc++.h>
using namespace std;

bool compare(int x,int y)
{
    return abs(x)<abs(y);
}
int main()
{
    int arr[]={ -2,-5,-7,6,3,4,9 };
    int n= sizeof(arr)/sizeof(arr[0]);
//using sorting
   sort(arr,arr+n,compare); 
   int min=INT_MAX;  int x,y;
   for(int i=0;i<n-1;i++){
       if(abs(arr[i]+arr[i+1])< min)
       {
           min=abs(arr[i]+arr[i+1]);
           x=i;y=i+1;
       }
   }
   
   cout<<"sum="<<arr[x]+arr[y]<<"- elements:"<<arr[x]<<","<<arr[y];

}
