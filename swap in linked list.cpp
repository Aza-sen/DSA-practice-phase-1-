#include <iostream>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = nullptr;

void insert(int x)
{
    node *temp = head;
    if (temp == NULL)
    {
        node *n = new node;
        n->data = x;
        n->next = nullptr;
        head = n;
    }
    else
    {
        while (temp->next)
        {
            temp = temp->next;
        }
        node *n = new node;
        n->data = x;
        n->next = nullptr;
        temp->next = n;
    }
}
void print_list()
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void swap(int n, int m,int size,node* h){
    if((n>0 and n<=size) and (m>0 and m<=size)){
        
        node* temp=h;
        node* tempn=h;
        node* tempm=h;
        int t=0;
        for(int i=1;i<=size;i++){
            if(i==n){
                tempn=temp;
            }
            if(i==m){
                tempm=temp;
            }
            temp=temp->next;

        }
        t=tempn->data;
        tempn->data=tempm->data;
        tempm->data=t;
        print_list();

    }
    else{
        cout<<"-1";
    }

}

int main(){
    int x=0,n=0,m=0,t=0,td=0;
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>td;
        insert(td);
        td=0;
    }
    cin>>n>>m;
    print_list();
    cout<<endl;
    swap(n,m,x,head);
    return 0;
    
}