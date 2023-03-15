#include<iostream>

using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int a[row][col]={0};
    int sum=0;
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++){

            a[i][j]=1;
            
            //cout<<"h"<<endl;
            if (a[i][j+1]==1 && (i>=0 && i<row && (j+1)>=0 && j+1<col) )
            { //cout<<"1"<<endl;
                sum+=1;
            }
            if (a[i+1][j]==1 && (i+1>=0 && i+1<row && j>=0 && j<col) )
            {//cout<<"2"<<endl;
                sum+=1;
            } 
            if (a[i][j-1]==1 && (i>=0 && i<row && j-1>=0 && j-1<col))
            { //cout<<"3"<<endl;
                sum+=1;
            }
            if (a[i-1][j]==1 && (i-1>=0 && i-1<row && j>=0 && j<col))
            {//cout<<"4"<<endl;
                sum+=1;
            }           
            
        }
    }
    /*for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }*/
    cout<<sum;
    

    return 0;
}