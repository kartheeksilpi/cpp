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
int intersection(node* &head1,node* &head2){
     int l;
     node* ptr1;
     node* ptr2;
    if(len(head1)>len(head2)){
       l=len(head1)-len(head2);
        ptr1=head1;
        ptr2=head2;
    }
    else{
        l = len(head2) - len(head1);
        ptr1=head2;
        ptr2=head1;
    }
    while(l){
        ptr1=ptr1->next;
        l--;
    }
    int count=1;
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return count;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return -1;
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
    cout<<intersection(head1,head2)<<endl;
return 0;
}