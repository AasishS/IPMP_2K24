#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void insert(int k, Node **head)
{
    Node *newnode= new Node();
    newnode->data= k;
    newnode->next=NULL;
    if(*(head)==NULL)
    {
        newnode->next=NULL;
      *(head)=newnode;
     } 
    else{
       Node *temp= *(head);
       while(temp->next!= NULL){
           temp= temp->next;
       }
       temp->next= newnode;
         
     }
}

Node *Merge(Node *a, Node *b)
{
    Node *temp1= a;  Node *temp2= b;
    Node *ans= NULL; int j=0;
    
    while(temp1!=NULL && temp2!=NULL  )
    {
        if((temp1->data) >= (temp2->data))
        {
           insert(temp2->data, &ans);
           temp2= temp2->next;
           
           if(temp2== NULL)
              break;
        }
        
        if((temp1->data) < (temp2->data))
        {
            insert(temp1->data, &ans);
            temp1= temp1->next;
       
          if(temp1== NULL)
            break;
        } 
    }

    while(temp1!= NULL){
        insert(temp1->data, &ans);
        temp1= temp1->next;
    }
    while(temp2!= NULL){
        insert(temp2->data, &ans);
        temp2= temp2->next;
    }

    return ans;
}

int main()
{
   Node *head1= NULL; Node *head2= NULL;
 //  cout<<"LK";
   for(int i=1; i<=5; i++){
       insert(i, &head1);  //1 2 3 4 5
       insert(2, &head2);  //2 2 2 2 2
   }

   Node *ans= Merge(head1,head2);
   cout<<"Merged: ";
   while(ans!=NULL) {
     cout<<ans->data<<" ";
     ans= ans->next;
   }
}


/*
 list<int> l1,l2;
 l1.sort(); l2.sort();
 list<int> l;
 merge(l1.begin(), l1.end(), l2.begin(), l2.end(), l.begin())
 */