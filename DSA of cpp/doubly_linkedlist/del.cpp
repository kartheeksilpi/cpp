#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data=val;
        next = NULL ;
        prev = NULL;
    }
};
void insertAtHead(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    temp->prev=n;
    n->next=temp;
    head=n;
}
void insertAtTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp=head;
    while (temp->next!=NULL) {
        temp=temp->next;}
        temp->next=n;
        n->prev=temp;
}
void del(node* &head,int pos){
    int count=1;
    node *temp=head;
    if(pos==count){
       head=head->next;
       head->prev=NULL;
       delete  temp;
       return;
        }
    
    
    while(temp!=NULL && count!=pos ){
        temp = temp -> next ;
        count++;
    }
   
    temp->prev->next=temp->next;
    if(temp->next!=NULL){
    temp->next->prev=temp->prev;}
    delete temp;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<=>";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    int a,n;
    node* head=NULL;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        insertAtTail(head,a);
    }
    display(head);
    del(head,1);
    display(head);
return 0;
}