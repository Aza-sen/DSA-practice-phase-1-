#include<iostream>

using namespace std;
int insert=-1;
int binary(int a[],int num,int start,int end){
    int middle= (start+end)/2;
    
   
    if(end>=start){
        if(a[middle]==num){
            return middle;
        }
        else if(a[middle]>num){
            if(num>a[middle-1]){
                insert=middle;
            }
            else{
                binary(a,num,start,middle-1);
            }
        }
        else{
            if(a[middle+1]>num){
                insert=middle+1;
            }
            else{
                binary(a,num,middle+1,end);
            }
        }
    }
    else{
        return insert;}

}

int main(){
    int a[100]={0},n=0,num=0,temp=0;
    cin>>n;
    for (int i= 0; i < n; i++)
    { 
        cin>>temp;
        a[i]=temp;
    }
    cin>>num;
    cout<<binary(a,num,0,n-1);

}