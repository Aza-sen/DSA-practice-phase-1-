#include<iostream>

using namespace std;

void sort_grades(int a[],int b[],int n){
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-1; j++)
        { 
            int temp1=0,temp2=0;
            if(a[j]>a[j+1]){
                temp1=a[j+1];
                a[j+1]=a[j];
                a[j]=temp1;
                temp2=b[j+1];
                b[j+1]=b[j];
                b[j]=temp2;


            }
        }
        
    }
}
int main(){
    int n,maxg,avgg;
    cin>>n>>maxg>>avgg;
    int req=avgg*n;
    int a[n],b[n];
    for (int i = 0; i < n; i++)
    {
        cin>>b[i]>>a[i];
    }
    int sum=0;
    for (int i = 0; i < n; i++)
    {
        sum=sum+b[i];
    }
    sort_grades(a,b,n);
    
    int count=0;
    if(sum<req){
        int j=0;
        while(sum<req){

            if(b[j]<maxg){
                sum+=1;
                count+=a[j];
                b[j]+=1;

            }
            if(b[j]==maxg){
                j++;
            }
            

            
        }

        cout<<count;

        

    }
    else{
        cout<<"0";
    }
    return 0;

}