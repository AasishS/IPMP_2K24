#include <iostream>
#include <queue>
using namespace std;

int main()
{
    
    priority_queue<int> q;
    // op- empty,push,pop,size,top

    q.push(10);
    q.push(9);
    q.push(17);
    q.push(5);
    q.push(11);

    cout<<"Size of prty queue: "<<q.size()<<endl;
    cout<< "Priority queue"<<endl;
    while(!q.empty())
    {
        cout<< q.top() <<" ";
        q.pop();
    }
}