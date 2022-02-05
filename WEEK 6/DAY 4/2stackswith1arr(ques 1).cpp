#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

class Stacks
 {
	int* arr;
	int size;
	int top1, top2;

    public:
	Stacks(int n) // constructor
	{
		size = n;
		arr = new int[n];
		top1 = -1;		top2 = size;
	}

	// Method to push an element x to stack1
	void push(int x,int s)
	{
	  if(s==1) //stack1
      {	
	    	if (top1 < top2 - 1) {
		    	top1++;
			    arr[top1] = x;
	    	}
	    	else {
		    	cout << "Stack Overflow";
	    		exit;
		    }
	}
     if(s==2)
      {
          	if (top2 - top1>1) {
		    	top2--;
		    	arr[top2] = x;
		    }
	    	else {
		    	cout << "Stack Overflow";
			    exit;
		    }
	  }
    }

	int pop(int s) //s- stck to be poped
	{
       if(s==1)
        { 
		    if (top1 >= 0) {
		    	int x = arr[top1];
		    	top1--;
		    	return x;
		    }
		    else {
	    		cout << "Stack UnderFlow";
	    		exit(1);
	    	}
	    }
       if (s==2)
	   {
		    if(top2 > size){
	    		cout << "Stack UnderFlow";
	    		exit(1);
	    	}
	    	else {
			    int x = arr[top2];
	    		top2++;
    			return x;
	    	} 
    	}
    	exit(1);
	}
	
	void display()
	{
	    cout<<"stack1\n  ";
	    for(int i=0;i<=top1; i++)
	      cout<<arr[i]<<" ";
	      cout<<"\n";
	      
	    cout<<"stack2\n  ";
	    for(int i=size-1; i>=top2;i--)
	      cout<<arr[i]<<" ";
	      cout<<"\n";
	}
	    
};

int main()
{
	Stacks s(6);
	s.push(5,1);
	s.push(11,1);
	s.push(2,2);
	s.push(3,1);
	s.push(4,1);
    s.push(7,1);
    s.display();
    
    s.push(14,2);
	cout << "\npopped from stack1 :"<< s.pop(1);
	s.push(14,2);
	cout << "\nPopped from stack2 :"<< s.pop(2);
	s.display();
	return 0;
}
