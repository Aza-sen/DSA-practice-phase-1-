#include<iostream>
#include<queue>
#include<vector>

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
    
    int n;
    cin>>n;
    int v[n];
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int visit[n]={0};
    
    v[0]=0;
    visit[0]=1;
    q.push(0);
    int x=1;


    
    while(q.empty()!=1){
        for(int i=0;i<n;i++){
            if(a[q.front()][i]==1 && visit[i]==0){
                q.push(i);
                visit[i]=1;
                v[x]=i;
                ++x;

            }

        }
        q.pop();

    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    


}