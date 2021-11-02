#include <iostream> 
#include <stack> 
using namespace std;

int main()
{
    stack<int> stck1; 
    stack<int> stck2;
    // stack operations -push,pop,top,empty,full
    // inbuilt fn - size,swap   
    
    stck1.push(5);         stck2.push(1);
    stck1.push(3);         stck2.push(4);
    stck1.push(11);        stck2.push(11);
    stck1.push(9);
    stck1.push(7);
    stck1.push(2);

    cout<<"size of stack1:"<<stck1.size()<<endl;

    stck1.swap(stck2);
    cout<<"After swapping"<<endl;

    cout<<"Stack1:   ";
    while(!stck1.empty())
    {
        cout<<stck1.top()<<" ";
        stck1.pop();
    }
    cout<<"\nStack2:   ";
    while(!stck2.empty())
    {
        cout<<stck2.top()<<" ";
        stck2.pop();
    }
 
    return 0;
}