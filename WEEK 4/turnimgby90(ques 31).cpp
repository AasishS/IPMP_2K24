#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4][5]={ {1,1,1,1,1},
              {2,2,2,2,2},
              {3,3,3,3,3},
              {4,4,4,4,4}};

    int n= sizeof(a[0])/sizeof(a[0][0]);
    int m= sizeof(a)/(n*4);
    
    for(int k=0;k<m;k++)
    {
        for(int j=0;j<n;j++)
          cout<<a[k][j]<<" ";
          cout<<endl;
    }
    
    int b[n][m];   int i=0;

    for(int c=0;c<n;c++)
    {
        i=0;
        while((m-i-1) >=0){
            b[c][i]=a[m-i-1][c];
            i++;
        }
    }
//display    
    for(int k=0;k<n;k++)
    {
        for(int j=0;j<m;j++)
          cout<<b[k][j]<<" ";
          cout<<endl;
    }          
}