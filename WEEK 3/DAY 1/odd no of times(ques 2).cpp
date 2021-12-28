
#include <bits/stdc++.h>
using namespace std;

int oddoccurence(vector<int> arr)
{
	int result = 0;
	int size=arr.size();
	for (int i =0; i<size; i++)	
		result=result^arr[i];
	
	return result;
}

int main()
{
	int arr[] = {1,2,3,2,4,3,1,3,4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int count,i=0;

//direct method	
	for (i =0; i<n; i++) {
        count = 0;
        for (int j =0; j<n; j++)
        {
            if (arr[i]==arr[j])
                count++;
        }
        if (count%2!= 0)
            break;
    }
	cout<< arr[i]<<" occurs "<<count<<" times"<<endl;

//bitwise op	
    vector<int> v={ 1,1,1,2,3,2,4,3,4 };
	cout << oddoccurence(v)<<"occurs odd times";
}
