#include <iostream>
using namespace std;

struct node{
    int data;
    node* left;
    node* right;
};
node* create_new_node(int x){
    node* n=new node;
    n->data=x;
    n->left=nullptr;
    n->right=nullptr;
    return n;
}

node* append(node*r,int x){
    if(r==NULL){
        r=create_new_node(x);
        return r;

    }
    
    if(x>=r->data){
            r->right=append(r->right,x);
        }
    if(x<=r->data){ 
            r->left=append(r->left,x);
        }
    
    return r;
}
int search(node* r,int x){
    if(r==NULL){
        return 0;
    }
    else if(r->data==x){
        return 1;
    }
    else if(r->data>x){
        return search(r->left,x);
    }
    else{
        return search(r->right,x);
    }
}



int main(){
    node* root=nullptr;
    int n,q,t=0;
    cin>>n;
    cin>>q;
    int x;
    for(int i=0;i<n;i++){
        cin>>t;
        root=append(root,t);

    }
    for(int j=0;j<q;j++){
        cin>>x;
        node* temp=root;
        int k=0,m=0;
        if(search(root,x)){
            while(temp!=NULL){
                if(temp->data==x){
                    cout<<temp->data<<endl;
                    break;
                }
                if(temp->data>x){
                    k=temp->data;
                    temp=temp->left;
                }
                if(temp->data<x){
                    temp=temp->right;
                }

            }
            
        }
        else{cout<<"-1"<<endl;}

    }
    return 0;}