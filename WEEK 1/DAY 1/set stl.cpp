#include <bits/stdc++.h>
using namespace std;

//set- begin,end,size,empty,insert,erase,find
//     max,min,bound
int main()
{
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(11);
    s.insert(7);
    s.insert(6);

    cout<<"Size of set- "<<s.size()<<endl;
//display    
    cout<<"\nInitial set: ";
    for(auto i=s.begin(); i!=s.end(); i++)
        cout<<*i<<" ";
//find
    int x; 
    cout<<"\nEnte the elemnt to check if present: "; cin>> x;
    
    if(s.find(x) !=s.end())
      cout<<x <<"present in the set"<<endl;
    else
      cout<<"Not present"<<endl;
//max elemnt
    cout<<"\nMax. element of set: "<<*( max_element(s.begin(),s.end()))<<endl;

//lower,upper bound
    set<int>::iterator low,up;
    low= s.lower_bound(5);
    up= s.upper_bound(5);
    cout<<"lower bound of 4 = "<< *(low)<<endl; // it returns the value
    cout<<"upper bound of 5 = "<< *(up)<<endl;//    instead of index

return 0;      
}




