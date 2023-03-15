#include <iostream>
using namespace std;

int cycle(int arr[1001][1001], int dfsv[], int visit[], int i, int n);


int main()
{
    int n=0,m=0;
    cin >> n >>m;
    

    int arr[1001][1001] = {0};


    for (int i = 0; i < m; i++)
    {
        int u,v;
        
        cin >> u;
        cin >> v;
        int temp=u-1;
        int temp1=v-1;
        arr[temp][temp1] = 1;
    
    }

    int dfsv[n] = {0},visit[n]={0};
    

    for (int i = 0; i < n; i++)
    {
        if (!visit[i])
        { 
            if(cycle(arr, dfsv, visit, i, n)==1){
            
            cout << "No";
            return 0;
        }
           
        
    }

    cout << "Yes";
    return 0;
}
}

int cycle(int arr[1001][1001],int visit[],int dfsv[], int i, int n)
{
    visit[i] = 0;
    if(visit[i]==0){
        
        visit[i]=1;
    }

    dfsv[i] = 1;
    
    

    for (int j = 0; j < n; j++)
    {
        if (!visit[j])
        { 
            if(arr[i][j] != 0){
                if(cycle(arr, dfsv, visit, j, n)==1){
                    return 1;
                }
            }
            
        }
        else if (dfsv[j] != 0)
        {
            if(arr[i][j] != 0){
                return 1;

            }
        }
    }

    dfsv[i] = 0;
    return 0;
}