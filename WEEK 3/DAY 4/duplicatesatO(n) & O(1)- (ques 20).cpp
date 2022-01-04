
#include <bits/stdc++.h>
using namespace std;

int main()
{
//if its given as array 
	int arr[50]={5,5,2,2,2,1,1,7,12,12};
	int n= sizeof(arr) / sizeof(arr[0]);

	for(int i=0;i<n;i++) {
		arr[arr[i] %n]= arr[arr[i]%n] + n;   //converting the given array into count array
	}
	cout<<"duplicates: "<<endl;
	for (int i =1; i<n; i++) {
		if (arr[i]/n >1) {
		    int k=arr[i]/n ;
			cout<<i<<"("<<k<<")"<<endl;
		}
	}
	return 0;
}

