#include <iostream>
#include <string>
#include <map> 

using namespace std;

//map stl- begin(),end(),size(),insert(k,v),
//          erase(k),find(v),at()
int main()
{
// M A P
    map<int, string> stdlist;
    stdlist.insert(std::pair<int,string>(1,"Ale"));
    stdlist.insert(std::pair<int,string>(4,"Sharj"));
    stdlist.insert(std::pair<int,string>(2,"humb"));
    stdlist.insert(std::pair<int,string>(6,"deer"));
    stdlist.insert(std::pair<int,string>(3,"fish"));
    stdlist.insert(std::pair<int,string>(5,"meat"));
    
    cout<<"Size of map ="<< stdlist.size() <<endl;
    stdlist.erase(5);
//display
    map<int, string>:: iterator i;
    for(i=stdlist.begin(); i!=stdlist.end(); ++i)
       cout<< i->first <<"  "<< i->second<< endl;
//find
    cout<<"\nEnter the name to check if available";
    string str;int m;
    cin>>str;  
    map<int, string>:: iterator j;
    for( j =stdlist.begin(); j!=stdlist.end(); j++)
    {
        if(str==j->second){
           m=j->first;
           break;    
        }
    }
    if(j==stdlist.end())
       cout<<"Not present";
      else 
    cout<<"Key of "<< str <<" "<< stdlist.find(m)->first;


return 0;
}