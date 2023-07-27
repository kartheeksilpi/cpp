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
void insert(node* &head,int val){
    node* n=new node(val);
    if(!head){
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=n;

}
void headdelete(node* &head){
    if (!head) return;
        node* dele=head;
        head=head->next;
        delete (dele);

}
void delet(node* &head,int val){
    if(!head) return ; //if head is null then there are no nodes to be deleted
    node* temp=head;
    if(temp->data==val){
        headdelete(head);   // deleting first node of linked list and returning it back.
         return;
    }
    while(temp->next != NULL && temp->next->data!=val){
        temp=temp->next;
    }if(temp->next==NULL){  // if the deleted element is not presented
        return ;
    }
    node* del=temp->next;
    temp->next=temp->next->next;
    delete del;
}
void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main(){
    node* head=NULL;
    for(int i=1;i<6;i++){
        insert(head,i);
    }
    display(head);
     delet(head,1);
    display(head);
    delet(head,7);
    display(head);
    delet(head,2);
    display(head);

}