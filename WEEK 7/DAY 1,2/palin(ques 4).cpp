#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

void checkforpalin(list<char> li)
{
    list<char>::const_iterator it= li.begin();
    auto ti= li.rbegin();

    while(*(it)== *(ti) && it!= li.end())
    {
        it++; ti++;
        
        if(it== li.end()){
          cout<<"Palindrome";
          return;
        }
    }
    
    cout<<"Not palin";
}
int main()
{
   list<char> li;  int x;
   cout<<"Enter list:"; int i=0;
   while(i!=10)
   {
       cin>>x;
       li.push_back(x);
       i++;
   }
   checkforpalin(li);
}
/* STL
  list<int> li;
    while(---)
      li.push_back(n);

    reverse_copy(li.begin(),li.end(),list);
    if(list=li)
*/
