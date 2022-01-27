
#include <bits/stdc++.h>
using namespace std;

void subArraySum(int arr[], int n, int sum)
{
    int curr_sum=0; int start=0,end=0 ;
    unordered_map<int,int> m;
    
    for(int i=0;i<n;i++)
    {
        curr_sum+= arr[i];
        m[curr_sum]= i;

        if(m.find(curr_sum- sum)!=m.end()){
            start=m[curr_sum -sum]+1;
            end=i;
            break;
        }
       
        if(curr_sum== sum){
            end=i; break;
        }          
    }
    if(start==end){
      cout<<"Sub array not present";
      return; }
      
    for(int i=start; i<=end;i++)
       cout<<arr[i]<<" ";
} 

int main()
{
    int n; cin>>n;
    cout<<"Enter array: ";
    int *arr =new int[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
      
    int sum = 6;
    cout<<"subarray- ";
    subArraySum(arr, n, sum);
    return 0;
}