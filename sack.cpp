#include <iostream>

using namespace std;

int maximum(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}


int maximix(int weg[],int prices[],int n,int W,int **knapsack);



int main(){
    int n,W;
    cin >> n;
    
    int weg[n]={0},prices[n]={0};
    int i=0;
    while(i<n){
        int temp=0;
        cin>>temp;
        weg[i]=temp;
    }
    
    int j=0;
    while(j<n){
        int temp1=0;
        cin>>temp1;
        prices[j]=temp1;
    }
    
    cin >> W;
    
    int **knapsack;
    knapsack = new int *[n+1];
    for(int i = 0; i <n+1; i++){
        knapsack[i] = new int[W+1];}

    
    for(int i=0;i<n+1;i++){
        
        knapsack[i][0]=0;
    }
    for(int i=0;i<W+1;i++){
        
        knapsack[0][i]=0;
    }
    
    cout<<maximix(weg,prices,n,W,knapsack);
    
    return 0;
}

int maximix(int weg[],int prices[],int n,int W,int **knapsack){
    for (int i=1; i<n+1; i++){
        for (int j=1; j<W+1; j++){
            
            if (weg[i-1] <= j){
                
                knapsack[i][j] = maximum(prices[i-1] + knapsack[i-1][j-weg[i-1]],knapsack[i-1][j]);
                
                
            } 
            
            else {
                
                knapsack[i][j] = knapsack[i-1][j];
            }
        }
    }

    return knapsack[n][W];

}