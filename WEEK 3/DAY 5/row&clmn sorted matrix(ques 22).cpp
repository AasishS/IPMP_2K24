
#include <bits/stdc++.h>
using namespace std;

int binarysearch(vector<vector<int>>arr, int m,int i,int x)
{
   int l,r;  l=0; r=m-1;int mid;
   if(x<arr[0][i]||x>arr[m-1][i])
     return -1;

   while(l<=r)
   {
      mid=(l+r)/2;
      if(x==arr[mid][i]){
        cout<<x<<" is present at "<<mid<<","<<i<<endl;
        return 1;}

      else if(x<arr[mid][i])
        r=mid-1;
      
      else if(x>arr[mid][i])
        l=mid+1;
   }  

        return -1;
 
}
void sarch(vector<vector<int>>arr, int m,int n,int x)
{
    int k=-1;
    if(x>arr[m-1][n-1]|| x<arr[0][0]){
       cout<<"Element not present"<<endl;
       return ;}
       
   for(int i=0;i<n;i++) {
      k= binarysearch(arr,m,i,x);
      if(k==1)
        break;
   }
   if(k==-1)
     cout<<"Element not present";
}

int main()
{
    int m=4,n=4;
    vector<vector<int>>arr={ {10, 21, 31, 42},
                                {15, 25, 35, 45},
                                {27, 29, 37, 48},
                                {32, 35, 39, 50} };
    int x;                            
    cout<<"Enter the no. "  ;  cin>>x;                          
    sarch(arr,m,n,x) ;                        
    
    return 0;
}
