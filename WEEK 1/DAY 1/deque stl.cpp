#include <iostream>
#include <bits/stdc++.h>
#include <deque>  
#include <algorithm>
using namespace std;

//deque- push_back,push_front,pop_back,pop_front
//            front(),back(),size,empty,erase,insert
int main()
{

    deque <int> q={11,7}; //initialising like array
    q.push_back(4);
    q.push_back(5);
    q.push_front(9);

    cout<<"Size of DEQue: "<< q.size()<<endl;
    cout<<"deque from from front"<<"\n";
//display
    for(auto i=q.begin(); i!=q.end(); i++)
       cout <<" "<< *i;
    deque <int>:: iterator it = find(q.begin(),q.end(),4); 
    
//insert,erase
    q.insert(it,25);
    q.insert(it,2,1);
    it=q.end();
    q.erase(it);
//Max element
    cout<<"\nMax element: "<<*(max_element(q.begin(),q.end())) <<endl;

cout<<"New deque\n";    
    for(auto i=q.begin(); i!=q.end(); i++){
       cout<<q.front()<<" ";
       q.pop_front();
    }
return 0;
}