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
void inserttail(node* &head,int val){
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
node* revk(node* &head,int k){
    node* prv=NULL;
    node* curr=head;
    node* nptr;
    int count=0;
    while(curr!=NULL && count<k){
        nptr=curr->next;
        curr->next=prv;
        prv=curr;
        curr=nptr;
        count++;
    }
    if(nptr!=NULL){
        head->next=revk(nptr,k);
    }
    return prv;
}
int main(){
    int n,a;
    cin>>n;
    node* head=NULL;
    for(int i=0;i<n;i++){
        cin>>a;
        inserttail(head, a);
    }
    display(head);
    node* newhead=revk(head,3);
    display(newhead);
    
return 0;
}