#include <iostream>
using namespace std;
class Node
{
    public:
     int data;
     Node *next;
};

class List
{
    public:
    Node *head=NULL;
    void insert(int k)
    {
        Node *newnode= new Node();
        newnode->data= k;
       if(head==NULL)
       {
          newnode->next=NULL;
          head=newnode;
       } 
       else{
           Node *temp= head;
           while(temp->next!= NULL){
               temp= temp->next;
           }
           temp->next= newnode;
            newnode->next=NULL;
       }
    }
    
   
    void display()
    {
        int j=1;
        Node *temp= head;
        while(temp->next!= NULL)
        {
            cout<< temp->data<<"->";
            temp= temp->next;
        }
        cout<< temp->data<<"-> null\n";
    }
};

Node *detectloop(Node *temp)
{
    Node *ptr1= temp;
    Node *ptr2= temp->next;

    while(ptr1!=NULL)
    {
        if(ptr2== ptr1)
        {
            cout<<"LOOP detected"<<endl;
              break;
        }
        ptr1= ptr1->next;
        ptr2= ptr2->next->next;
    }
 }

int main()
{
    List li;
    
    li.insert(4);
    li.insert(11);
    li.insert(1);
    li.insert(6);
    li.insert(19);
    li.insert(10);
//creating loop
   Node *temp= li.head;
  while(temp->next!=NULL) {
     temp= temp->next;  }
     temp->next=(li.head)->next->next->next;

    detectloop(li.head);
}
