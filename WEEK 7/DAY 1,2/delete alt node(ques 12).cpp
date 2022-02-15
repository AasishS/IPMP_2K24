#include<bits/stdc++.h>
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
       if(head== NULL)
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

void delete_alt_node(Node *a,List li)
{
    Node *temp= a;
    while(temp->next!= NULL)
    {
        Node *temp1= temp->next;
        if(temp1->next==NULL)
        {
            delete(temp1);
            temp->next= NULL;
            return;
        }
        temp->next= temp1->next;
        delete(temp1);
        temp=temp->next;
    }
    return;

}

int main()
{
    List li;  int n;
    cout<<"size: "; cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        li.insert(k);
    }

    delete_alt_node(li.head,li);
    li.display();
}

/* stl
 list<int> li;
 auto it= li.begin();
 while(it!=li.end())
 {
     it++;
     it=li.erase(it);
 }
 */