
#include <bits/stdc++.h>
using namespace std;

void oddoccurence(int arr[], int size)
{
	unordered_map<int,int> m;
	for (int i = 0;i<size;i++) 
		m[arr[i]]++;

	cout<<"The odd ocurences are ";
	for (auto& x : m) 
  {
		if (x.second % 2 != 0)
			cout << x.first<<" ";
	}
}

int main()
{
	int arr[] = {12,23,34,12,12,23,12,45};
	int size = sizeof(arr)/ sizeof(arr[0]);
	oddoccurence(arr,size);
	return 0;
}

