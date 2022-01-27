#include<bits/stdc++.h>
using namespace std;

void findbysorting(int arr[],int n)
{
    int count=0,count_n=1; int x,x_temp;
    for(int i=1;i<n;i++)
    {
        if(arr[i-1]==arr[i]){
            count_n++;
            x_temp=arr[i];
        }
        else{
            if(count<=count_n){
                count=count_n;
                x=x_temp;
            }
             count_n=1;
        }
    } 

    cout<<x;
}

int main()
{
    int arr[]={2, 3, 3, 5, 3, 4, 1, 7};
    int n = sizeof(arr)/sizeof(arr[0]);
  //Sorting
       sort(arr,arr+n);
       findbysort(arr,n);
}