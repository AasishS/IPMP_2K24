#include<bits/stdc++.h>
using namespace std;

void findsequence(int arr[],int n)
{
    int max=n-1, min=0;
	int *larger= new int[n];
	int *smaller=new int[n];
	
	smaller[0]=-1;
	for(int i=1;i<n;i++ )
    {
		if(arr[i]>arr[min]){
			smaller[i]=min;
		}
		else{
			smaller[i]=-1;
			min=i;
		}
	}

	larger[n-1]=-1;
	for(int i=n-2;i>=0;i--){
		if(arr[i]<arr[max]){
			larger[i]=max;
			
		}
		else{
			larger[i]=-1;
			max=i;
		}
	}

	for(int i=0;i<n;i++){
		if(smaller[i]!=-1&&larger[i]!=-1)
		{
			cout<<endl<<arr[smaller[i]]<<' '<<arr[i]<<' '<<arr[larger[i]];
			return;
		}
	}
	cout<<"no triplets";
}
int main()
{
	int arr[]={34,56,45,51,69,70};
	findsequence(arr,6);
}
