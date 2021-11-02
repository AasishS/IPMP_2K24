#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    //Queue op - push,pop,empty
    // other fn - front(),back(),size
    q.push(4);
    q.push(11);
    q.push(9);
    q.push(8);
    q.push(2);
    cout<<"Queue size: "<<q.size()<<endl;
    cout<<"Queue.front() :" << q.front()<<endl;
    cout<<"Queue.back() :"<< q.back()<<endl;

    q.pop();
    cout<<"Queue fter poped"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}