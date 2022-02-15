#include <bits/stdc++.h>
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

    void reverse(Node *temp)
    {
        Node *temp1= temp->next;
        if(temp1->next==NULL)
        {
            temp1->next= temp;
            head->next=NULL;
            head= temp1;
            return;
        }
        else
        {
            
            reverse(temp1);
            temp1->next= temp;
            return;
        }
    }

    void display()
    {
        Node *temp= head; cout<<"LL: ";
         while(temp!= NULL){
              cout<<temp->data<<" ";
               temp= temp->next;
           }
    }

};

int main()
{
    cout<<"Enter the list: ";
    List li;  
    int n; int i=0;
    while(i!=4){
        cin>>n;
        li.insert(n); 
        i++;
    }
    li.display();
    
    li.reverse(li.head); cout<<"\nAfter revsersed";
    li.display();

}