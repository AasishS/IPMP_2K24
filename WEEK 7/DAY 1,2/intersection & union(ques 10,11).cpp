#include<bits/stdc++.h>
using namespace std;

class Node
{
   public: 
    char data;
    Node *next;
};
class List 
{
   public:
   Node *head= NULL;
   
   void push(char c)
   {
     Node *newnode= new Node();
     newnode->data= c;
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
};

void intersection(Node *l1, Node *l2)
{
//    Node *l1=ll1; Node *l2= ll2;
    unordered_map<char,int> m;
    
    while(l1!=NULL)
    {
      m[l1->data]=1;
      l1= l1->next;
    }

    while(l2 !=NULL){
      m[l2->data]++;
      l2 = l2->next;
    }
    
    cout<<"intersection: ";
    auto i= m.begin();
    for(i;i!=m.end();i++)
    {
        if(i->second >1)
          cout<<i->first<<" ";
    }    

    cout<<"\nUnion: ";
    i=m.begin();
    for(i;i!=m.end();i++)
    {
          cout<<i->first<<" ";
    }
}

int main()
{
    cout<<"Enter the lists\n";
    List l1,l2;  int i=0; char c;
    while(i!=5){
      cin>>c;   l1.push(c);
      i++;
      }
    int j=0;  
    while(j<5){
      cin>>c;   l2.push(c);
      j++;
      }  
   
 intersection(l1.head, l2.head);
}
