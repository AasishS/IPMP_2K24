#include<bits/stdc++.h>
using namespace std;

void findwater(vector<int> arr)
{
    int n=arr.size();
    int left[n],right[n];

    left[0]=arr[0]; right[n-1]=arr[n-1];//left array stores max elemnt on its left 
    for(int i=1;i<n;i++)                  //right arr stores max elem on its right
      left[i]=max(arr[i],left[i-1]);
    for(int i=n-2;i>=0;i--)
      right[i]=max(arr[i],right[i+1]);
    
    int water=0;
    for(int i=1;i<n-1;i++)
       water+= min(left[i],right[i]) - arr[i];

    cout<<"water collected:"<<water;      
}
int main()
{
    vector<int> arr={3, 0, 2, 0, 4} ;
    findwater(arr);
}