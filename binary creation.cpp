#include<iostream>

using namespace std;

struct node{
    int data;
    node* right;
    node* left;


};

node* new_node(int d){
    node* n=new node;
    n->data=d;
    n->left=nullptr;
    n->right=nullptr;
    return n;
}

node* add_node(int d,node* root){
    if(root==NULL){
        return new_node(d);
    }
    if(d>root->data){
        root->right=add_node(d,root->right);
    }
    if(d<root->data){
        root->left=add_node(d,root->left);
    }
    return root;
}

node* lca(node* root,int x,int y){
    if((x>root->data && y<root->data) || (x<root->data && y>root->data)){
        return root;
    }
    if(x==root->data || y==root->data){
        return root;

    }
    if(x>root->data && y>root->data){
        return lca(root->right,x,y);
        
    }
    if(x<root->data && y<root->data){
        return lca(root->left,x,y);

    }
}

int cal(node* root,int o,int c){
    if(o==root->data){
        
        c=c^root->data;
        return c;
    }
    if(o>root->data){
        c=c^root->data;
        return cal(root->right,o,c);
    }
    if(o<root->data){
        c=c^root->data;
        return cal(root->left,o,c);
    }


    
}



int main(){
    int n;
    cin>>n;
    int a[n];
    node* root=NULL;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i < n; i++)
    {
        root=add_node(a[i],root);
    }
    int q;
    cin>>q;
    for (int i = 0; i < q; i++)
    {
        int o,p;
        cin>>o>>p;
        node* temp=lca(root,a[o],a[p]);
        int calcu=cal(temp,a[o],0)^cal(temp,a[p],0);
        cout<<calcu<<endl;


        
        
        
    }
    
    
    
}


