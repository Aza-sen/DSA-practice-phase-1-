#include<iostream>

using namespace std;

int main(){
    int a[100]={0},n=0,num=0,temp=0;
    cin>>n;
    for (int i= 0; i < n; i++)
    { 
        cin>>temp;
        a[i]=temp;
    }
    cin>>num;
    int res=-1;
    int i=0;
    int even=-1;
    if(n%2==0){
         even=1;
    }
    else{
        even=0;}

    while(i<n){
        if(a[i]==num){
            res=i;
            break;

        }
        if(a[i]>num && a[i-1]==num){
            res=i-1;
            break;
        }

        i+=2;
    }
    if(even=1 && res==-1){
        if(a[n-1]==num){
            res=n-1;
        }
    }
    if(res!=-1){
        cout<<res;
    }
    else{
        cout<<"-1";
    }


    
}

