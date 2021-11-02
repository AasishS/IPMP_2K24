#include <iostream>
#include <string>
#include <map> 
#include <unordered_map>
using namespace std;

// -  begin,end,bucket,bucket_count
int main()
{
//UNORDERED MAP
     cout<<"\n\nUnordered Map\n\n";
    unordered_map<int, string> food;
    food.insert(std::pair<int,string>(1,"Ale"));
    food.insert(std::pair<int,string>(4,"Sharj"));
    food.insert(std::pair<int,string>(2,"humb"));
    food.insert(std::pair<int,string>(6,"deer"));
    food.insert(std::pair<int,string>(3,"fish"));
    food.insert(std::pair<int,string>(5,"meat"));
    
    food.erase(5);
//Display    
    unordered_map<int, string>:: iterator ip;
    for(ip =food.begin(); ip!= food.end(); ++ip)
       cout<<ip->first<<"  "<<ip->second<<endl;
       
//size of map,bucket,bucket_count
    cout<<"map size: "<< food.size()<<endl;
    
    int n= food.bucket_count();
    cout<<"\nunordered_map 'food' has "<< n<<" bucket"<<endl;
    for (int i=0; i<n; ++i) {
       cout<< " bucket " <<i<<" has "<< food.bucket_size(i)<<" elements.\n";}
return 0;
}