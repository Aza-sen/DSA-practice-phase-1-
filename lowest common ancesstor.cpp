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
int ancestor(node* root,int n,int m){
    node* temp=root;
    if(search(root,n) and search(root,m)){
        while(temp!=NULL){
            if((temp->data)>n and (temp->data)>m){
                temp=temp->left;
            }
            if((temp->data)<n and (temp->data)<m){
                temp=temp->right;
            }
            if(((temp->data)>=n and (temp->data)<=m) or ((temp->data)<=n and (temp->data)>=m)){
                return temp->data;
            }
        }
    }
    else{
        return -1;
    }
    }
int main(){
    node* root=nullptr;
    int a,b,temp=0;
    cin>>a;
    cin>>b;
    for(int i=0;i<a;i++){
        cin>>temp;
        root=append(root,temp);
        temp=0;
    }
    for(int j=0;j<b;j++){
        int t=0,y=0;
        cin>>t;
        cin>>y;
        cout<<ancestor(root,t,y)<<endl;

    }
    
    return 0;
}