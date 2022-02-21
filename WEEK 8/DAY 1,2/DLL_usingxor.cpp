 
#include <bits/stdc++.h>
#include <cinttypes>
 
using namespace std;
 
class Node 
{
    public : 
    int data;
    Node* xnode;
};
 
Node* Xor(Node* x, Node* y)
{
    //reinterpret_cast<data type> (pointer)- used to convert a pointer
    //                     of some data type into a pointer of another data type
    return reinterpret_cast<Node*>(
        reinterpret_cast<uintptr_t>(x)^ reinterpret_cast<uintptr_t>(y));
}
 
// Insert a node at the start of the Xored LinkedList 
void insert(Node** head_ref, int data)
{
    Node* new_node = new Node();
    new_node -> data = data;
    new_node -> xnode = *head_ref;
 
    if (*head_ref != NULL) {
        (*head_ref)-> xnode = Xor(new_node, (*head_ref)->xnode);
    }
 
    *head_ref = new_node;
   
}

void search(int k,Node *head)
{
    Node *curr= head;
    Node *prev= NULL; Node *next;
    while(curr!= NULL)
    {
        if(curr->data == k)
        {
         cout<<"\nElem present"; 
         return;
        }
        next= Xor(prev, curr->xnode);
        prev= curr;
        curr= next;
    }
    cout<<"\nnot pres";
}
void printList(Node* head)
{
    Node* curr = head;
    Node* prev = NULL;
    Node* next;
 
    cout << "Frward DLL:\n";

    while(curr!= NULL) {
        cout<< curr->data<<" ";

        next = Xor(prev, curr -> xnode);
        prev = curr;        curr = next;
    }
    cout << "\nRevrse DLL:\n";
    curr= prev;
    
    while(curr!= NULL)
    {
        cout<< curr->data<<" ";
        
        prev= Xor(curr->xnode, next);
        next= curr; 
        curr= prev;
    }
}
 

int main()
{
    Node* head = NULL;
    insert(&head, 11);
    insert(&head, 13);
    insert(&head, 15);
    insert(&head, 14);
    insert(&head, 17);
 
    printList(head);
    
    search(15,head);
 
    return (0);
}
