#include<iostream>
//#include<queue>

using namespace std;

struct node{
    int data;
    node* next;

};

void addnode(int d,node* head){
    if(head==NULL){
        node* temp= new node;
        temp->data=d;
        temp->next=nullptr;
        head=temp;

    }
    else{
    
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;

        }
        node* n=new node;
        n->data=d;
        n->next=nullptr;
        temp->next=n;
    }
}

//void schedule(node* adg[],queue q,int done[]){

//}
int main(){
    int n,m;
    cin>>n;
    cin>>m;
    int done[n+1]={0};
    node* list[n+1]={0};
    //queue<int> q;
    
    for (int i = 0; i < m; i++)
    {
        int temp1,temp2;
        cin>>temp1>>temp2;
        addnode(temp1,list[temp2]);


    }

    
    
    /*for(int i=1;i<n+1;i++){
        node* temp=list[i];
        
        while(temp->next!=NULL){
            cout<<temp->data<<endl;
            temp=temp->next;

        }
    }*/
    for(int i=1;i<n+1;i++){

        if(list[i]==NULL){
            done[i]=-1;
        }
        else{
            node* temp=list[i];
            while(temp->next!=NULL){
                done[temp->data]=-1;
                temp=temp->next;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        if(done[i]==0){
            cout<<"No";
            return 0;
        }
    }
    cout<<"Yes";
    return 0;
    


}