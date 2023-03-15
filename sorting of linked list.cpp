#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
};

void create(int x){
    node *n=new node;
    n->data=x;
    n->next=nullptr;
    head=n;
}
void insert(int x){
    node *temp=head;
    if(temp==NULL){
        create(x);

    }
    else{
        while(temp->next){
            temp=temp->next;
        }
        node *n=new node;
        n->data=x;
        n->next=nullptr;
        temp->next=n;
    }
}
void in(int x){
    node *temp=head;
    node *n=new node;
    n->data=x;
    n->next=head;
    head=n;
}
void print(){
    node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
node* Middle(node* h){
    node* slow=h;
    node* fast=h;
    while(fast!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

node* Merge(node* first,node* second){
    if(second==NULL){
        return first;
    }
    if(first==NULL){
        return second;
    }
    node* a= new node;
    a->data=0;
    a->next=nullptr;
    node* temp= a;

    while(first!=NULL && second!=NULL){
        if(first->data<=second->data){
            temp->next=first;
            temp=first;
            first=first->next;

        }
        if(first->data>second->data){
            temp->next=second;
            temp=second;
            second=second->next;            
        }

    }

    while(first!=NULL){
            temp->next=first;
            temp=first;
            first=first->next;        
    }
    while(second!=NULL){
            temp->next=second;
            temp=second;
            second=second->next;        

    }
    a=a->next;
    return a;




}
node* merge_sort(node* h){
    if((h==NULL) || (h->next==NULL)){
        return h;
    }
    node* mid=Middle(h);
    node* first=h;
    node* second=mid->next;
    mid->next=NULL;

    first=merge_sort(first);
    second=merge_sort(second);
    node* result=Merge(first,second);
    return result;

}
int main()
{   int n=0;
    node* head=nullptr;
    for (int i = 0; i < n; i++)
    { int temp=0;
        cin>>temp;
        head=insert(temp);
    }
    merge_sort(head);
    print();
    


    

    return 0;
}