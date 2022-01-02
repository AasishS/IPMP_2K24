
#include <bits/stdc++.h>
using namespace std;

void display(array<int,6> arr,int n)
{
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
      cout<<endl;
}
void segregate(array<int,6> arr,int n)
{
    int l=0; int r=n-1;  //pointer
    while(l<=r)
    {
        if(arr[l]%2!=0){
            if(arr[r]%2==0)
              swap(arr[l],arr[r]);
            else
              r--;
        }
        else
           l++;
    }
    
    display(arr,n);
}

int main()
{
    array<int,6> arr={ 2,3,4,5,6,7 };
//inbuilt fn
    stable_partition(arr.begin(),arr.end(),[](auto a){return a%2==0; });
    display(arr,6);

//partition algo    
    array<int,6> arr1={ 11,12,3,14,15,16 };
    segregate(arr1,6);
    return 0;
}
