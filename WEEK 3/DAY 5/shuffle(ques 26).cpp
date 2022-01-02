
#include<bits/stdc++.h>
#include <time.h>
using namespace std;

void swap (int *a, int *b)
{
	int temp = *a;
	*a = *b;	
  *b = temp;
}

void shuffle(int arr[], int n)
{
	srand (time(NULL));
	for (int i = n - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);
		swap(&arr[i], &arr[j]);
	}
}

int main()
{
	int arr[] = {30, 35, 40, 45, 50, 55, 60, 65, 70};
	int n = sizeof(arr) / sizeof(arr[0]);

	shuffle(arr, n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
    	cout << "\n";

	return 0;
}

