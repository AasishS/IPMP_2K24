#include <bits/stdc++.h>
using namespace std;

class Node{
  public:  
    int data;
    Node *next;
};

    void push(int k, Node **head)
    {
       Node *newnode= new Node();
       newnode->data=k;
       newnode->next=NULL;
       if(*(head)!= NULL)
       {
           Node *temp= *head;
           
           while(temp->next!= NULL)
              temp= temp->next;
              
            temp->next= newnode;  
       }
       else
         *(head)= newnode;
    }
    
    
void display(Node *head)
{
    Node *temp= head;
    while(temp!=NULL){
        cout<< temp->data<<"-> ";
          temp= temp->next;
    }
    cout<<"NULL";
      
}

void rotate(Node *head, int k)
{
    Node *temp= head;
    Node *p= NULL; 
    int index=1;
    while(temp->next!=NULL)
    {
        temp= temp->next;
        if(index== k-1)
          p= temp;
          
          index++;
    }
    
    temp->next= head;
    head= p->next;
    p->next= NULL;

   display(head);
}

int main()
{
    Node *head=NULL;
    push(5,&head);//  5->3->11->2->8->15
    push(3,&head);//  0  1  2   3  4  5
    push(11,&head);
    push(2,&head);
    push(8,&head);
    push(15,&head);
    
    display(head);
    cout<<endl;
    rotate(head,4);
    
}

/* STL
std::list<int> li ; int k;
    cout<<"Enter the list: "; 
    while(1)
    {
        cin>>k;
        if(k ==-111)
          break;
        li.push_back(k);
    }
    int x;
    cout<<"enter index: "; cin>>x;
    std:: list<int>:: iterator it= li.begin();
    for(int i=0;i<x;i++)
      it++;
    
    std::rotate(li.begin(), it, li.end());
    
    it= li.begin();
    for(it; it!= li.end(); it++)
      cout<<*it<<"->";
      cout<<"null";
      */