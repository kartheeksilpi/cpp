#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next = NULL;
    }
};
void insert(node* &head,int val){
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
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
node* mergerec(node* head1,node* head2){
    if(head1==NULL){
        return head2;
    }
    else{
        return head1;
    }
    node* result;
    if(head1->data < head2->data){
        result=head1;
        result->next=mergerec(head1->next,head2);
    }
    else{
        result=head2;
        result->next=mergerec(head1,head2->next);
    }
    return result;
}
node* merge(node* head1,node* head2){
    node* ptr1=head1;
    node* ptr2=head2;
    node* dummynode=new node(-1);
    node* ptr3=dummynode;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->next=ptr1;
            ptr1=ptr1->next;
           
        }
        else{
            ptr3->next=ptr2;
            ptr2=ptr2->next;
            
        }
         ptr3=ptr3->next;
    }
    while(ptr1!=NULL){
        ptr3->next=ptr1;
        ptr1=ptr1->next;
        ptr3=ptr3->next;
    }
    while(ptr2!=NULL){
        ptr3->next=ptr2;
        ptr2=ptr2->next;
        ptr3=ptr3->next;
    }
    return dummynode->next;
}
int main(){
     int n,m,a;
    cin>>n;
    cin>>m;
    node* head1=NULL;
    node* head2=NULL;
    
    for(int i=0;i<n;i++){
        cin>>a;
        insert(head1, a);
    }
    for(int i=0;i<m;i++){
        cin>>a;
        insert(head2, a);
    }
    display(head1);
    display(head2);
    node* newhead=merge(head1,head2);
    node* newhead0=mergerec(head1,head2);
    display(newhead);
    display(newhead0);

}