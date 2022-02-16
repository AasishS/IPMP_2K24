
#include <bits/stdc++.h>
using namespace std;

class Node {
public:
	int data;
	Node* next;
};

Node* intersectPoint(Node* head1, Node* head2)
{
	Node* ptr1 = head1;
	Node* ptr2 = head2;

	while (ptr1 != ptr2) 
	{
		ptr1 = ptr1->next;
		ptr2 = ptr2->next;

		if (ptr1 == ptr2) 
			return ptr1;
		
		if (ptr1 == NULL) 
			ptr1 = head2;
		
		if (ptr2 == NULL) 
			ptr2 = head1;
		
	}

	return ptr1;
}

int main()
{
	
	Node* newNode;
	Node* head1 = new Node();
	head1->data = 10;
	Node* head2 = new Node();  
	head2->data = 3;
	newNode = new Node();
	newNode->data = 6;
	head2->next = newNode;
	newNode = new Node();
	newNode->data = 9;
	head2->next->next = newNode;
	newNode = new Node();
	newNode->data = 15;                //     1st Linked list is 3->6->9->15->30
	head1->next = newNode;               //   2nd Linked list is 10->15->30
	head2->next->next->next = newNode;
	newNode = new Node();
	newNode->data = 30;
	head1->next->next = newNode;
	head1->next->next->next = NULL;
	Node* intersect_node = NULL;

	// Find the intersection node of two linked lists
	intersect_node = intersectPoint(head1, head2);

	cout << "intersection point: ";
	cout<< intersect_node->data;

	return 0;
}

/* map
 map<int,int> m1;
 Node *temp= head1;
 while(temp!=NULL){
  m[temp]= temp->data;
  temp= temp->next;
  }

Node *temp2= head2;
 while(temp2!=NULL){
   if(m1.fin(temp2)!= m1.end())
     return temp2; 

   temp2=temp2->next;    
 } 

*/

/*  STL
list1.sort();    list2.sort();
set_intersection(li.begin(),li.end(), l.begin(),l.end(),result.begin());
cout<<"elem="<<*result.begin();
cout<<"address:"<< result.begin();
*/