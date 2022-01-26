#include<bits/stdc++.h>
using namespace std;

void printdiagonal(int arr[5][4], int m,int n)
{
    int sum=m+n-2;  int k=0;
    for(int i=0; i<m && k<m;i++)
    {
        i=k; int j=0;
          while((i+j)==k && i>=0 && j<n)
          {
            cout<<arr[i][j]<<" ";
            i--;j++;
         }
         cout<<endl;
        k++; 
    }
    int x=1; 
    for(int j=1; k<(m+n-1);j++)
    {
         int i=4; j=x;
          while((i+j)==k && i>=0 && j<n)
          {
            cout<<arr[i][j]<<" ";
            i--;j++;
         }
         cout<<endl;
        k++; x++; 
    }

}

int main()
{
     int arr[5][4] ={ { 1,2,3,4 },    
                    { 5,6,7,8 },
                    { 9,10,11,12}, 
                   { 13,14,15,16},
                   { 17,18,19,20} };
                   
      int n= sizeof(arr[0])/sizeof(arr[0][0]);
      int m= sizeof(arr)/(n*4);   

      printdiagonal(arr,m,n);           
}