#include<list>
#include<iostream>

using namespace std;
int count=0;
class Node
{
    public:
    int data;
    Node *next;
};
class List
{

    public:
    Node *head;
    void insert(int k)
    {
       Node *temp= new Node();
       temp->data= k;
       temp->next= head;
       head= temp;  count++;
    }
    
    void Delete(int k)
    {
        int flag=0;
        Node *temp= head, *temp2=NULL;
        while(temp!= NULL)
        {
            if((temp->next)->data== k){
              flag=1;
              break;}
            temp= temp->next;  
        }
        temp2= temp->next;
        temp->next= temp2->next;
        temp=temp2; 
        delete temp;
    }

    void search(int n)
    {
        int j=1;
        Node *temp= head;
        while(j!=n)
        {
            j++;
            temp= temp->next;
        }
        cout<<j<<"th node(enD) :"<< temp->data;
    }
};

int main()
{
    List li;  cout<<"Enter list: ";
    int n;
    while(1){
        cin>> n; //-111 to terminate
        if(n== -111)
          break;
        li.insert(n);
    }

    cout<<"enterr index: "; 
    cin>>n;
    li.search(n);
}