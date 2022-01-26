#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

vector<int> v(10);
void intersection(vector<int>v1, vector<int>v2)
{
    vector<int> v_temp(5); 
    vector<int>::iterator it; 
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    it=set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),v_temp.begin() );

    v.assign(v_temp.begin(),it);
}

void insert()
{
     std::vector<int> a3;
    for(int i=0;i<5;i++){
      int num; cin>>num;
        a3.push_back(num);
    }
    intersection(v,a3);
}
int main()
{
    int n; cout<<"n:"; cin>>n;
    vector <int> a1; 
    vector <int> a2;
    int i;
   cout<<"set1"; 
   for(int i=0;i<5;i++){
        int num; cin>>num;
        a1.push_back(num);
    }
  cout<<"set2";
    for(i=0;i<4;i++)
    {
       int num; cin>>num;
        a2.push_back(num);
    }
    
    intersection(a1,a2);
  for(int i=0;i<n-2;i++){
     cout<<"set"<<i+3; insert();
  }
cout<<"Intersection";
   vector<int>:: iterator it;
   for(it=v.begin();it!=v.end();it++)
      cout<<*it<<" ";
 
}