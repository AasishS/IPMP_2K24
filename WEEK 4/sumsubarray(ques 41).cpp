
#include<bits/tdc++.h>
using namespace std;

void sumarray(int arr[],int n)
{
	int max_sofar=INT_MIN,sum = 0;
	int start =0, end = 0, s=0;

	for(int i=0; i< n; i++ )
	{
	 sum += arr[i];

		if (max_sofar<sum)
		{
			max_sofar = sum;
			end = i;
		}
		if (sum < 0)
		{
			sum= 0;
			start = i + 1;
		}
	}
	cout << "Maximum sum :"<< max_sofar<< endl;
	for(int i=start; i<=end;i++)
      cout<<arr[i]<<" ";
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int arr[] = { 1, -2, -3, 0, 7, -1, 2 };
	int n = sizeof(arr) / sizeof(arr[0]);
    sumarray(arr,n);
}
