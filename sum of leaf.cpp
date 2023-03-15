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
int isleaf(node* r){
    if(r==NULL){
        return 0;
    }
    if(r->left==NULL and r->right==NULL){
        return 1;
    }
    else{
        return 0;
    }
}
int sum=0;
int sumofleft(node* root){
    if(root==NULL){
        return 0;
    }
    if(isleaf(root->left)){
        sum+=root->left->data;
    }
    if(isleaf(root->right)){
        return 0;
    }
    else{
        sumofleft(root->left);
        sumofleft(root->right);
    }
}

int main(){
    int n,temp=0;
    cin>>n;
    node* root=nullptr;
    for(int i=0;i<n;i++){
        cin>>temp;
        root=append(root,temp);

    }
    sum=0;
    sumofleft(root);
    cout<<sum<<endl;

}