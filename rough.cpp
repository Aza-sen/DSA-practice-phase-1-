#include <iostream> 
using namespace std;

int main(){
    int n,m,u,v,w;
    int key[n];
    key[0]=0;
    cin >> n>>m;;
    
    for (int i=1; i<n; i++){
        key[i]=1000;
    }
    
    
    int matrix[1001][1001] = {0};

    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            matrix[i][j]=0;
        }
    }
    int AA[n*n][n*n];
    int mst[n] ;
    for (int i=0;i<n;i++){
        mst[i]=0;
    }
    int yy=0;
    while(yy<m){cin>>u;
        cin>>v;
        cin>>w;
        matrix[v-1][u-1]=w,matrix[u-1][v-1]=w;;yy++;}
    int parent[n]={0} ;
    int tit=0;
    while(tit<n){parent[tit]=-1;tit++;}
    
    for(int t=0;t<n*n;t++){
        for(int y=0;y<n*n;y++){
            AA[t][y]=t*y;
        }
    }
    int hello=0;
    while(hello<n){
        if (mst[hello]==0){
            mst[hello]=1;
            int rer=n;
            while(rer>0){
                if (matrix[hello][n-rer]!=0){
                    if ( key[n-rer]>matrix[hello][n-rer]  ){
                    parent[n-rer]=hello;
                    key[n-rer]=matrix[hello][n-rer];
                    
                }
                }
                rer--;} 
        }
        hello++;}
    
    
    for (int i=1; i<n; i++){
        key[i]= key[i-1] + key[i];
    }
    
    cout<<key[n-1];
    return 0;    
}