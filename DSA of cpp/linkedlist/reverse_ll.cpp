#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};  
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* rev(node* &head){
    node* prev=NULL;
    node* curr=head;
    node* nxtptr;
    while(curr!=NULL){
        nxtptr=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nxtptr;
    }
    return prev;
}
int main(){
    int n,a;
    cin>>n;
    node *head = NULL;
    for(int i=0;i<n;i++){
        cin>>a;
       insertAtTail(head,a);
    }

    display(head);
       node* newhead=rev(head);
    display(newhead);
    


return 0;
}