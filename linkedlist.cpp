
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

void insertathead(node* &head,int val){
    node* n=new node(val);
    n->next=head;
}

void insertattail(node* head,int val){
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

bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void deletell(node* head,int val){
    
    if(head==NULL){
        return;
    }
    
    if(head->next==NULL){
        head==NULL;
        return;
    }
    
    if(head->data==val){
      head=head->next;
        return;
    }
    
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;

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
   insertattail(head,4);
   display(head);
   insertathead(head,0);
   display(head);
   cout<<search(head,3)<<endl;
   deletell(head,3);
   display(head);
   
   node* newhead=reverse(head);
   display(newhead);
   
   newhead=reverserecur(newhead);
   display(newhead);
   return 0;
}




