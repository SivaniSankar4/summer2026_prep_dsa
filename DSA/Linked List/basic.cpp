#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int val){ //constructor
        data=val;
        next=NULL;
    }
};
void insertAtEnd(Node* &head,int val){
    Node* node = new Node(val);
    if(head==NULL){
        head=node;
        return;
    }
    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
}
void insertAtbeginning(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    n->next=head;
    head=n;
}
void printLL(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void printeven(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data%2==0){
            cout<<temp->data<<" ";
        }
        temp=temp->next;
    }
    cout<<endl;
}
void insertatposition(Node* &head,int pos,int val){
    Node* node=new Node(val);
    if(pos==1){
        node->next=head;
        head=node;
        return;
    }
    Node* temp=head;
    for(int i=1;i<pos-1&&temp!=NULL;i++){
        temp=temp->next;
    }
    node->next=temp->next;
    temp->next=node;
}
int main(){
    //Node *head=new Node(); //now we have not initialized data and next , so both have garbage value, we have to initialise every time
    //for that we create a constructor. constructor is a fuction that has no return type it initialises when a object is created
    /*
    Node *head=new Node(1);
    Node *n1=new Node(2);
    head->next=n1; //static method we dont use this , this is for reference
    */
   Node* head=NULL;
   insertAtEnd(head, 1);
   insertAtEnd(head, 2);
   insertAtEnd(head, 3);
   insertAtEnd(head, 4);
   insertAtbeginning(head, 15);
   printLL(head);
   printeven(head);
   insertatposition(head,4,11);
   printLL(head);

}