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
void insertTail(node* &head,int val){
    node* n=new node(val);
    if(head==NULL){
        head=n;
    }
    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void display(node* &head){
    node* temp=head;
    while(head!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;

}
node* rev(node* &head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=rev(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}
int main(){
    node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        insertTail(head,a);
    }
    display(head);
    node* newhead=rev(head);
    display(newhead);
return 0;
}