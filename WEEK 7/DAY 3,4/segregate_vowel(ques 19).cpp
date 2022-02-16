#include<bits/stdc++.h>
using namespace std;

int main()
{
   list<char> li;
   char c;
   while(1) //enter 9 to end the input
     {
       cin>>c;
        if(c!= '9'){
            li.push_back(c);
        }
        else if(c== '9')
          break;
     }
   list<char>:: iterator i= li.begin();

    int n= li.size(); int k=0;
    while(k<n){
        if(*i=='e' || *i=='a'|| *i=='i'|| *i=='o'|| *i=='u' ){
          li.push_back(*i);
          li.erase(i++);
          }
        else
          i++; 

      k++;
    }
cout<<"After rearangement\n";
    for(i=li.begin(); i!= li.end(); i++)
      cout<<*i<<" ";
  
  return 0;
}
