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
int len(node* &head){
    node* temp=head;
    int count=0;
    while(temp!=NULL){
        count++;  
        temp=temp->next;      
    }
    return count;
}
node* kappend(node* &head,int k){
    int l=len(head);
    node* temp=head;
    node* newtail;
    node* newhead;
    int count=1;
    while(temp->next!=NULL){
        if(count==l-k){
            newtail=temp;
        }
        if(count==l-k+1){
            newhead=temp;
        }
        temp=temp->next;
        count++;
    }
    temp->next=head;
    newtail->next=NULL;
    return newhead;
}

int main(){
    int n,a;
    cin>>n;
    node* head=NULL;
    
    for(int i=0;i<n;i++){
        cin>>a;
        insert(head, a);
    }
    display(head);
    node* newhead=kappend(head,3);
    display(newhead);
return 0;
}