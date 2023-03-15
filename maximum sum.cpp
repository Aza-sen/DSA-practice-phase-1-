#include <iostream>

using namespace std;

int flag=0;

void is_cycle(int **a, int st, int n, int p,int visited[])
{

    visited[st] = 1;
    
    for (int i = 1; i < n+1; i++)
    {   
        
        if (a[st][i] == 1)
        {
            if (a[st][i] == 1 && visited[i] == 0)
            {
                p = st;
                is_cycle(a, i, n, p,visited);
            }

            else if (a[st][i] == 1 && visited[i] == 1 && i != p)
            {
                flag=1;
                
                
            }
        }
    }
    

 
}





int main(){

    int n,m;
    cin>>n>>m;
    int **a;
    a = new int *[n+1];
    for(int i = 0; i <n+1; i++){
        a[i] = new int[n+1];
    }
    int visited[n+1]={0};
    visited[0]=1;
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
    for (int i = 0; i < m; i++)
    {
        int temp1=0,temp2=0;
        cin>>temp1>>temp2;
        a[temp1][temp2]=1;
        a[temp2][temp1]=1;

    }
    



    





    int p = -2;


    for (int i = 1; i < n+1; i++)
    {   
        if(visited[i]==0){
            is_cycle(a, i, n, p,visited);
        }
    }
    
    

    if(flag==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}
