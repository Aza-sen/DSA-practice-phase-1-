#include<iostream>

using namespace std;
void eat(int **a,int i,int j,int row,int col);



int main(){
    int row,col;
    cin>>row>>col;
    int **a;
    a = new int *[row];
    for(int i = 0; i <row; i++)
        a[i] = new int[col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>a[i][j];
        }
        
    }
    int o,p;
    cin>>o>>p;
    int f=-1;
    if(a[o][p]==0){
        
        f=0;
    }
    for (int i = 0; i < col; i++)
    {
        if(a[0][i]==1){
            eat(a,0,i,row,col);
        }
    }
    for (int i = 0; i < row; i++)
    {
        if(a[i][0]==1){
            eat(a,i,0,row,col);
        }
    }
    for (int i = 0; i < row; i++)
    {
        if(a[i][col-1]==1){
            eat(a,i,col-1,row,col);
        }
    }
    for (int i = 0; i < col; i++)
    {
        if(a[row-1][i]==1){
            eat(a,row-1,i,row,col);
        }
    }
    if(a[o][p]==0 && f==-1){
        cout<<1;
    }
    else{
        cout<<0;
    }
    

    
}
void eat(int **a,int i,int j,int row,int col){
    if(i<0||i>=row||j<0||j>=col||a[i][j]==0){
        return;
    }

    a[i][j]=0;

    eat(a,i-1,j-1,row,col);
    eat(a,i-1,j,row,col);
    eat(a,i-1,j+1,row,col);
    eat(a,i,j-1,row,col);
    eat(a,i,j+1,row,col);
    eat(a,i+1,j+1,row,col);
    eat(a,i+1,j,row,col);
    eat(a,i+1,j-1,row,col);
}
