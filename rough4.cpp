#include<iostream>

using namespace std;

struct node{
    int x;
    int y;
    int dist;

    node* next;
};

node* queue_push(int x0,int y0,int dis,node* head){
    if(head==NULL){
        node* n= new node;
        n->x=x0;
        n->y=y0;
        n->dist=dis;
        n->next=nullptr;
        head=n;

        return head;


    }
    
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node* n= new node;
        n->x=x0;
        n->y=y0;

        n->dist=dis;
        n->next=nullptr;
        temp->next=n;

    return head;

    
}

node* queue_front(node* head){
    return head;
}

node* qpop(node* head){

    head=head->next;

    return head;

}


int main(){
    int row,col;
    cin>>row>>col;
    int c,d;
    cin>>c>>d;                // made queue using linked list as im able to store distance and x y coordinate
    int e,f;
    cin>>e>>f;
    int a[row+1][col+1]={0};
    for (int i = 0; i < row+1; i++)
    {
        a[i][0]=1;
    }
    for (int i = 0; i < col+1; i++)
    {
        a[0][i]=1;
    }
     
    int fl=-1;
    node *head=nullptr;
     
    head=queue_push(c,d,0,head);
    a[c][d]=1;           // pushed initial position
  
    
    while(head!=NULL){
                                                // bfs travel in queue
        int C=head->x;
        int D=head->y;
        
        if(head->x==e && head->y==f){
            cout<<head->dist;
            fl=0;                         // checking if the queue node has the final position
            break;
        }
        int tempd=head->dist;                   // taking note of the parent distance
        if(a[C+1][D-2]==0 && C+1>0 && C+1<col+1 && D-2>0 && D-2<row+1 ){
            head=queue_push(C+1,D-2,tempd+1,head);
            a[C+1][D-2]=1;
        }                                                                            // pusing the further moves in the linked list and checking if the obey the moves nad are not visited once
        if(a[C+1][D+2]==0 && C+1>0 && C+1<col+1 && D+2>0 && D+2<row+1 ){
            head=queue_push(C+1,D+2,tempd+1,head);
            a[C+1][D+2]=1;
        }
        if(a[C-1][D+2]==0 && C-1>0 && C-1<col+1 && D+2>0 && D+2<row+1 ){
            head=queue_push(C-1,D+2,tempd+1,head);
            a[C-1][D+2]=1;
        }
        if(a[C-1][D-2]==0 && C-1>0 && C-1<col+1 && D-2>0 && D-2<row+1 ){
            head=queue_push(C-1,D-2,tempd+1,head);
            a[C-1][D-2]=1;
        }
        if(a[C+2][D-1]==0 && C+2>0 && C+2<col+1 && D-1>0 && D-1<row+1 ){
            head=queue_push(C+2,D-1,tempd+1,head);
            a[C+2][D-1]=1;
        }
        if(a[C+2][D+1]==0 && C+2>0 && C+2<col+1 && D+1>0 && D+1<row+1 ){
            head=queue_push(C+2,D+1,tempd+1,head);
            a[C+2][D+1]=1;
        }
        if(a[C-2][D-1]==0 && C-2>0 && C-2<col+1 && D-1>0 && D-1<row+1 ){
            head=queue_push(C-2,D-1,tempd+1,head);
            a[C-2][D-1]=1;
        }
        if(a[C-2][D+1]==0 && C-2>0 && C-2<col+1 && D+1>0 && D+1<row+1 ){
            head=queue_push(C-2,D+1,tempd+1,head);
            a[C-2][D+1]=1;
        }

        head=qpop(head);         // poping the visited node;


    

    }
    
    if(fl==-1){
        cout<<-1;
    }

}


