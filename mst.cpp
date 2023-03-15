#include<iostream>
using namespace std;
struct node{
    node *next;
    int idx;
    int weight;
};

void insert(node *arr[],int u,int v,int w ){
    node *p=arr[u];
    if(p){
        node *temp=p;
    while(temp->next){temp=temp->next;}
    node *t=new node;
    t->idx=v;
    t->weight=w;
        t->next=nullptr;
    temp->next=t;}
    else{
        node *t=new node;
        t->idx=v;
        t->weight=w;
        t->next=nullptr;
        p=t;
    }
    node *q=arr[v];
    if(q){
        node *temp=q;
    while(temp->next ){temp=temp->next;}
        node *y=new node;
        y->idx=u;
        y->weight=w;
        y->next=nullptr;
        temp->next=y;}
    else{
        node *y=new node;
        y->idx=u;
        y->weight=w;
        y->next=nullptr;
        q=y;
    }
    arr[u]=p;
    arr[v]=q;
}
int main(){
    int n,m;
    cin>>n>>m;
    node *arr[n]={0};
    int visit[n];

    int mina[3];
    int min=100000;
    
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        
        if(w<min){
            mina[0]=w;
            mina[1]=u;
            mina[2]=v;

        }
        insert(arr, u, v, w);
    }
    visit[0]=mina[1];
    visit[1]=mina[2];
    int count=0;
    count+=min;
    int nodes=n-2;
    


    return 0;
}