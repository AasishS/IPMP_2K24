
#include <bits/stdc++.h>
using namespace std;

void printUnion(int arr1[], int arr2[],int m,int n)
{
	int i=0,j =0;
	while (i <m && j <n) {
		if (arr1[i]< arr2[j])
			cout<< arr1[i++]<< " ";
		else if (arr2[j]< arr1[i])
			cout<<arr2[j++]<<" ";
		else {
			cout << arr2[j++] << " ";
			i++;
		}
	}
	while (i < m)
		cout << arr1[i++] << " ";
	while (j < n)
		cout << arr2[j++] << " ";
}

int main()
{
	int arr1[]={1,2,3,4,5,6,7};
	int arr2[]={1,2,4,7};

	int m =sizeof(arr1)/sizeof(arr1[0]);
	int n =sizeof(arr2)/sizeof(arr2[0]);
	int x=-1;
  int intersection[50];
//Intrsection
    for(int i=0;i<m;i++)
    {
        for(int j=0; j<n; j++){
         if(arr1[i]==arr2[j] && arr1[i]!=intersection[x]){
           x++;    
           intersection[x]=arr1[i];}
        }
    }    
    cout<<"Intersection: ";
    for(int i=0;i<=x;i++)
      cout<<intersection[i]<<" ";
      cout<<endl;

//Union
	cout<<"Union: ";
	printUnion(arr1,arr2,m,n);

}
