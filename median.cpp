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
void inorder(node* root){
    
    int a[1000]={0};
    if(root==NULL){
    return;
    }
    else {
    inorder(root->left);
    root->data;
    inorder(root->right);
}

}



int main(){
    node* root=nullptr;
    int n ;
    cin>>n;
    int a[n];
    

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    

    for(int i=0;i<n;i++){

        
        root=append(root,a[i]);
        inorder(root);


    }



    return 0;}