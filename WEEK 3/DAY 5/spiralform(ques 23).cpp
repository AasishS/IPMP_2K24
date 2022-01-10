#include<bits/stdc++.h>
using namespace std;

void spiralform(int arr[3][5],int m,int n)
{
   int k=0,l=0;  //k,m- rows;    l,n-columns
   int i;
   
    while (l<n && k<m) 
    {
        for(i=l;i<n;i++) 
            cout <<arr[k][i] <<" ";
        k++;

        for(i=k;i<m;i++) 
            cout <<arr[i][n-1] <<" ";
        n--;

        if(k < m) {
            for(i =n-1; i>=l;i--) 
                cout <<arr[m-1][i]<<" ";
            m--;
        }

        if(l < n) {
            for(i =m-1;i>=k;i--) 
                cout <<arr[i][l] <<" ";
            l++;
        }
    }
}

int main()
{
    int arr[3][5]={ {1 ,2, 3 , 4, 5},
                    {6 ,7, 8 , 9,10},
                    {11,12,13,14,15} } ;

    int m,n; 
    n= sizeof(arr[0])/sizeof(arr[0][0]);
    m= sizeof(arr)/sizeof(arr[0]);
    
    spiralform(arr,m,n);                
}