
#include <bits/stdc++.h>
using namespace std;
 
int binarysearch(int arr[],int low,int high) 
{ 
    while(high>=low) 
    { 
        if(arr[0]==1)
            return 0; 

        int mid = low +(high-low)/2; 
        if (arr[mid-1]==0 && arr[mid]==1) 
            return mid; 
        else if(arr[mid]==0)
            low=mid+1;
        else
           high=mid-1;
    } 
    return -1; 
} 

void maximum1s(int mat[4][5],int c,int r) 
{ 
    int row= 0, max = -1; 
    int x; 
    for (int i=0; i<r;i++) 
    { 
        x = binarysearch(mat[i], 0, c-1); 
        if (x!=-1 && c-x>max) 
        { 
            max=c-x; 
            row=i; 
        } 
    } 
    cout<<"row with maximum no of 1's: "<<row<<endl;
} 

int main() 
{ 
    int mat[4][5] = {{0, 0, 0, 1, 1}, 
                    {0, 1, 1, 1, 1}, 
                    {0, 0, 1, 1, 1}, 
                    {0, 0, 0, 0, 0}}; 
    
    int c=sizeof(mat[0])/sizeof(mat[0][0]);
    int r=sizeof(mat)/c;
    maximum1s(mat,c,r); 

return 0; 
} 