#include<iostream>


using namespace std;

class que{
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
int main(){
    que q;
    
    int n,m,k;
    cin>>n>>m>>k;
    
    int a[n+1][n+1]={0};
    for(int i=0;i<m;i++){
        int o,p;
        cin>>o>>p;
 
        a[o][p]=1;
        a[p][o]=1;
    }
    for (int i = 1; i < n+1; i++)
    {
        a[k][i]=0;
    }
    for (int i = 1; i < n+1; i++)
    {
        a[i][k]=0;
    }
    
    
    int visit[n+1]={0};
    
    
    visit[1]=1;
    q.push(1);

    /*for (int i = 1; i < n+1; i++)
    {
        for (int j = 1; j < n+1; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }*/
    
  


    
    while(q.empty()!=1){
        for(int i=1;i<n+1;i++){
            if(a[q.front()][i]==1 && visit[i]==0){
                q.push(i);
                visit[i]=1;
                
                

            }

        }
        q.pop();

    }
    if(visit[n]==1){
        cout<<1;
    }
    else{
        cout<<0;
    }

    


}
