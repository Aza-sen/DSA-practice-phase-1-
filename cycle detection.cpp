#include<iostream>

using namespace std;

int cycle(int start,int **a,int visit[],int parent,int n);

int main(){

    int n,m;
    cin>>n>>m;
    int **a;
    a = new int *[n+1];
    for(int i = 0; i <n+1; i++){
        a[i] = new int[n+1];
    }
    int visit[n+1]={0};
    visit[0]=1;
    for (int i = 0; i < m; i++)
    {
        int temp1=0,temp2=0;
        cin>>temp1>>temp2;
        a[temp1][temp2]=1;
        a[temp2][temp1]=1;

    }
    int flag=0;
    for(int i=1;i<n+1;i++){
        if(visit[i]!=0 && cycle(i,a,visit,-1,n+1)){
            flag=1;
        }
    }
    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }


    return 0;

}

int cycle(int start,int **a,int visit[],int parent,int n){
    visit[start]=1;
    for(int i=1;i<n+1;i++){
        if(i!=parent){
            if(visit[i]==1){
                return 1;
            }
            if(visit[i]==1 && cycle(i,a,visit,start,n)){
                return 1;
            }
        }
    }
    return 0;



}