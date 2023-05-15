//Linked List is a linear data structure
//Limitations of array
/*
1)--> Fixed Size
2)--> Contiguous Block of memory
3)--> Inserting and deleting is costly

//Properties of a linked list

1)--> Size can be modified
2)--> Non-contiguous memory
3)--> Insertion and Deletion at any point is easier
// Question arises from where the linked list is starting so we initialize  a head pointer
and the node having its next as Null is ending of linked list 
*/

#include<iostream>
using namespace std;

class node
{
    public:
    int data;
    node* next; //Pointer will be pointing to next node
    
    node(int val) // node is constructor
    {
        data=val;
        next=NULL;
    }
};
void insertAtHead(node* &head,int val)
{
   node* n=new node(val);
   n->next=head;
   head=n; 
}



void insertAtTail(node* &head,int val)
{
    node* n=new node(val);

    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;

}

void display(node* head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;

}
bool search(node* head,int key)
{
    node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
 void deleteAtHead(node* &head)
 {
    node* todelete=head;
    head=head->next;
    delete todelete;
 }

void deletion(node* &head, int val)
{
    if(head==NULL)
    {
        return;
    }
    if(head->next==NULL)
    {
        deleteAtHead(head);
        return;
    }
    
    
    node* temp=head;
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

//Reversing a linked list

int main(){

    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    
    display(head);
    insertAtHead(head,6);
    display(head);
    //cout<<search(head,3)<<endl;
    //deletion(head,3);
    display(head);
    deleteAtHead(head);
    display(head);
 
 return 0;
}


