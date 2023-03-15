#include<iostream>

using namespace std;


int minu(int a,int b){
    if(a<=b) return a;
    else return b;
}

int maxu(int a,int b){
    if(a>=b) return a;
    else return b;
}

int maximize(int start,int end,int score[],int **a){
    

    if(start==end){
        return score[start];
    }
    if(start>end){
        return 0;
    }
    if(a[start][end]!=-1){
        return a[start][end];
    }
    
    int temp1,temp2;

    temp1=score[start]+minu(maximize(start+2,end,score,a),maximize(start+1,end-1,score,a));
    temp2=score[end]+minu(maximize(start,end-2,score,a),maximize(start+1,end-1,score,a));

    a[start][end]=maxu(temp1,temp2);

    return a[start][end];

}
int main(){
    int n;
    cin>>n;
    int score[n];
    for (int i = 0; i < n; i++)
    {
        cin>>score[i];
    }
    
    int **a;
    
    a = new int *[n];
    
    for(int i = 0; i <n; i++){
        a[i] = new int[n];
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0;  j< n; j++)
        {
            a[i][j]=-1;
        }
        
    }
    
    

    
    cout<<maximize(0,n-1,score,a);
    


}