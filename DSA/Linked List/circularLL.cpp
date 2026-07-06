#include <iostream>
using namespace std;
class Node{
    public:
    Node *next;
    int data;
    Node(int val){
        data=val;
        next=NULL;
    }
};
void insertatend(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        head->next=head;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void insertatbeg(Node* head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        n->next=head;
        head=n;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}
// void deleteatend(Node* &head){
//     Node* temp=head;
//     while(temp->next->next!=head){
//         temp=temp->next;
//     }
// }
void deleteatbeginning(Node* &head){
    if(head==NULL)return;
    if(head->next==head){
        delete head;
        head=NULL;
        return;
    }
    Node* temp=head;
    Node* n=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    head=head->next;
    temp->next=head;
    delete n;
}
void printLL(Node* head){
    Node* temp=head;
    // while(temp->next!=head){
    //     cout<<temp->data<<" ";
    //     temp=temp->next;
    // }
    // cout<<temp->data;
    // cout<<endl;
    //better way
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=head);
    cout<<endl;
}
int main(){
    Node* head=NULL;
    insertatend(head,1);
    insertatend(head,2);
    insertatend(head,3);
    insertatend(head,4);
    printLL(head);
    insertatbeg(head,5);
    printLL(head);
}