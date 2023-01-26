#include <iostream>

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

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
      cout<<temp->data<<"->";
      temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}








node* reverse(node* head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;
    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

node* reverserecur(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* newhead=reverserecur(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}

int main()
{
   node* head=NULL;
   node* second=NULL;
   node* third=NULL;
   
   head=new node(1);
   second=new node(2);
   third=new node(3);
   
    head->next=second;
   
   
   second->next=third;
   
   
   third->next=NULL;
  
  display(head);
   
    node* newhead=reverse(head);
   display(newhead);
   
    newhead=reverserecur(newhead);
   display(newhead);
   return 0;
}

