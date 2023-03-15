#include<iostream>

using namespace std;
void eat_island(int **a,int i,int j,int row,int col);



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
    int count=0;
    for (int i = 0; i < row; i++)
    
    {
        for (int j = 0; j < col; j++)
        {
            if(a[i][j]==1){
                
                eat_island(a,i,j,row,col);
                count+=1;

            }
        }
        
    }
    cout<<count;

    

}
void eat_island(int **a,int i,int j,int row,int col){
    
    if(i<0||i>=row||j<0||j>=col||a[i][j]==0){
        return;
    }

    a[i][j]=0;

    eat_island(a,i-1,j-1,row,col);
    eat_island(a,i-1,j,row,col);
    eat_island(a,i-1,j+1,row,col);
    eat_island(a,i,j-1,row,col);
    eat_island(a,i,j+1,row,col);
    eat_island(a,i+1,j+1,row,col);
    eat_island(a,i+1,j,row,col);
    eat_island(a,i+1,j-1,row,col);

}