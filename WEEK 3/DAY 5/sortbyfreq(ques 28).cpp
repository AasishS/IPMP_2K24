
#include<bits/stdc++.h>
using namespace std;

bool fcompare(pair<int,pair<int,int>> x,pair<int,pair<int,int>> y)
{                                               // Compare function
	if ((x.second).second != (y.second).second)
		return ((x.second).second > (y.second).second);
	else
		return ((x.second).first < (y.second).first);
}
void sortbyfreq(int arr[], int n)
{
	unordered_map<int,pair<int,int>> m; //map

	for (int i=0;i<n; i++) 
    {
		if (m.find(arr[i]) != m.end())
			m[arr[i]].second++;
		else
			m[arr[i]] = make_pair(i, 1); //index,count
	}

   	vector< pair<int,pair<int,int>> > v;

	auto it = m.begin();
	for (it; it != m.end(); ++it)
		v.push_back(make_pair(it->first, it->second));

	sort(v.begin(),v.end(),fcompare);

//the sorted sequence
	for (int i = 0; i < v.size(); i++) {
		int count = v[i].second.second;
		while (count--)  //to print k times
			cout << v[i].first << " ";
	}
}

int main()
{
	int arr[] = {2, 5, 2, 8, 5, 6, 8, 8};
	int n = sizeof(arr)/sizeof(arr[0]);

	sortbyfreq(arr,n);

return 0;
}
