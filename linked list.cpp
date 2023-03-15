/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
struct node{
    int data;
    node *next;
};
node *head=nullptr;
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
int main()
{
    insert(0);
    insert(9);
    insert(8);
    insert(7);
    insert(6);
    insert(5);
    
    print();
    

    return 0;
}