
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//stl in vector - begin(),end(),size(),empty()
//algorithm stl - sort,lower & upper_bound,search(find),
//               min_element,max_element
int main()
{
    vector<int> arr= {11,2,4,9,5,17,4 };
    int k= arr.size();  cout<< "Size of vector: "<< k<<endl;
    
    cout<<"minimum element: "<< *( min_element(arr.begin(),arr.end()) )  <<endl;
    cout<<"max. element: "<<  *( max_element(arr.begin(),arr.end()) ) <<endl;
//sort    
    sort(arr.begin(), arr.end()); //begin and end are used as its vector
    cout<<"Sorted array: ";
    for(auto i=arr.begin(); i!=arr.end(); ++i)
        cout<<*i <<" ";
//bound    
    vector<int>:: iterator low,up;
    low = lower_bound(arr.begin(), arr.end(), 8);  //returns pointer
    up= upper_bound(arr.begin(), arr.end() ,15);
    
    cout<<"\n\nlower bound for 8: "<< low -arr.begin()+1<<endl; //1 added cuz index 
    cout<<"upper bound for 15: "<<up- arr.begin()+1<<endl; //    starts from 0
//find    
    int x;
    cout<<"\nChecking if k is present\n k="; cin>>x;
    vector<int>:: iterator A = find(arr.begin(),arr.end(),x );
    if(A!= arr.end())
    {
        cout<<"element "<<x<<" present at index: "<< A-arr.begin()+1<<endl;
    }
    else
       cout<<"Not present"<<endl;

    return 0;    
}
