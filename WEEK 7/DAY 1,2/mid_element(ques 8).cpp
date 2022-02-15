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
    Node *head=NULL;  int count=0;
    Node *mid=NULL;
  void insert(int k)
    {
        count++;
        Node *newnode= new Node();
        newnode->data= k;
       if(head==NULL)
       {
          newnode->next=NULL;
          head=newnode;
          mid= head;
       } 
       else{
           Node *temp= head;
           while(temp->next!= NULL){
               temp= temp->next;
           }
           temp->next= newnode;
           newnode->next=NULL;
       }

       if(count% 2 ==0 && count!=1)
       {
           mid= mid->next;
       }
    }
};

void findmid(List l)
{
    cout<<l.mid-> data;
}
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
    findmid(li);
    return 0;
}

/* 
stl
list<int> li;
int k= li.size();
it=li.begin();
for(i=0 ; i<k/2; i++)
  it++;

cout<<*it;s
*/ 