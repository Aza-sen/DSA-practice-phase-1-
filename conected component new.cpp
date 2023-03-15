#include<iostream>

using namespace std;

class queue{
    int f=-1,b=-1;
    public:
    int a[100];
    int empty(){
        if(f==-1 && b==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int n){
        if(f==-1){
            f=0;
        }
        ++b;
        a[b]=n;

    }
    void pop(){
        if(empty()){
            ;
        }
        else{
            if(f==b){
                f=b=-1;
            }
            else{
                ++f;
            }
        }
    }
    int front(){
        if(empty()){
            return -1;
        }
        else{
            return a[f];
        }
    }

};

void bfs(int visit[],int start,int** a,int n);


int main(){
    int n,m;
    cin>>n;
    cin>>m;
    // matrix creation
    int **a;
    a = new int *[n+1];
    for(int i = 0; i <n+1; i++){
        a[i] = new int[n+1];
    }
    // matrix intialization
    for(int i=0;i<n+1;i++){
        for (int j = 0; j < n+1; j++)
        {
            a[i][j]=0;
        }
        
    }
    for (int i = 0; i < n+1; i++)
    {
        a[i][0]=1;
        a[0][i]=1;
    }
    //matrix formation
    for (int i = 0; i < m; i++)
    {
        int temp1=0,temp2=0;
        cin>>temp1>>temp2;
        a[temp1][temp2]=1;
        a[temp2][temp1]=1;

    }

    //visit array initialization

    int visit[n+1]={0};
    visit[0]=1;

    int count=0;

    for (int i = 1; i < n+1; i++)
    {
        if(visit[i]==0){
            bfs(visit,i,a,n);
            count++;
        }
    }


    

    cout<<count;
    



}

void bfs(int visit[],int start,int** a,int n){
    queue q;
    q.push(start);

    visit[start]=1;

    while(q.empty()!=1){
        for(int i=1;i<n+1;i++){
            if(a[q.front()][i]==1 && visit[i]==0){
                q.push(i);
                visit[i]=1;
                
                
                    
                    

            }

        }
        q.pop();
            
    }
}