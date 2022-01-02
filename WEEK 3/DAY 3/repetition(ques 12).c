#include<stdio.h>
#include<stdlib.h>
int largest(int arr[],int n)
{
    int k= arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>k)
          k=arr[i];
    } 
    return k; 
}
void findrep(int arr[],int n)
{
   int m=largest(arr,n); 
   int *count= (int *)malloc(m*sizeof(int)); 
   for(int i=0;i<n;i++)
   {
        count[arr[i]]++;
   }  
   for(int i=0;i<m;i++){
      if(count[i]>1)
         printf("%d ",i);}
}
int main()
{
    int arr[]={ 2,2,3,4,5,5,6,7 };
    int n= sizeof(arr) / sizeof(arr[0]);
    findrep(arr,n);
return 0;    
}
