#include<iostream>

using namespace std;

int checkboard(int A,int B,int C,int D,int E,int F,int sum){
    sum=sum+1;
    if(C-1||C+1||C+2||C-2==E && D-1||D+1||D+2||D-2==F){
        return sum;

    }
    if(C<1 || C>A || D<1 || D>B){
        return -1;
    }
    return checkboard(A,B,C+1,D-2,E,F,sum)||checkboard(A,B,C+1,D+2,E,F,sum)||checkboard(A,B,C-1,D+2,E,F,sum)||checkboard(A,B,C-1,D-2,E,F,sum)||checkboard(A,B,C-2,D-1,E,F,sum)||checkboard(A,B,C-2,D+1,E,F,sum)||checkboard(A,B,C+2,D-1,E,F,sum)||checkboard(A,B,C+2,D+1,E,F,sum);

}

int main(){
    int A,B,C,D,E,F;
    cin>>A>>B>>C>>D>>E>>F;
    cout<<checkboard(A,B,C,D,E,F,0);
    
    
    
    return 0;

}