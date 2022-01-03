#include<bits/stdc++.h>
using namespace std;

void display(int arr[],int i,int n)
{
    int x=i+1;
    vector<int> v(arr+x,arr+n); int j=0;
    sort(v.begin(),v.end());
    int N=v.size();
    
    for(int k=i+1,j; k<n,j<N; k++,j++)
      arr[k]=v[j];
      
    for(int k=0;k<n;k++)
          cout<<arr[k];  
}
int largest(int arr[],int i,int n)
{
    vector<int> v(arr+i,arr+n);
    sort(v.begin(),v.end());  int k=v.size(); 
    int j,m,x;
    for(j=0;j<k; j++)
    {
        if(v[j]==arr[i])
            break;
    }  
    for( m=i;m<n;m++) {
      if(v[j]!=v[k-1] && arr[m]==v[j+1] )
      {
        x= m;
        break; }
      else
        x=i;   
    }
    return x;
}
void nextgreater(int arr[],int n)
{
    int i,j;
    for(i=n-2;i>=0;)
    {
        int k= largest(arr,i,n);
           
        if(arr[i]<arr[k])
          {
              int temp= arr[i];
              arr[i]=arr[k];
              arr[k]=temp;
              break;
          }
        else  
          i--;
    }

    display(arr,i,n);
}
int main()
{
    int arr[]= {1,3,6,7,5}; //13425
    int n= sizeof(arr)/ sizeof(arr[0]);
    cout<<"Next greater: ";
    nextgreater(arr,n);
}