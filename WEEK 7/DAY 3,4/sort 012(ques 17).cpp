#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> li;
    cout<<"Enter the list: ";
    char c;
    while(1)
    {
        cin>>c;
        if(c!= 'q'){
            int k= c- '0';
            li.push_back(k);
        }
        else if(c== 'q')
          break;
    }
    int n= li.size();  int k=0;
    list<int>:: iterator it= li.begin();

    for(it; k<n; )
    {
        if(*(it) == 0){
          li.push_front(0); 
          li.erase(it++);
          
        }

        else if(*it == 2){
            li.push_back(2);
            li.erase(it++);
        }
        else
          it++;
          
          k++;
    }
    
    it= li.begin();
    while(it!= li.end())
    {
        cout<<*it<<" ";
        it++;
    }
}