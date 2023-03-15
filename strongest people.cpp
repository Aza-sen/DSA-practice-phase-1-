#include<iostream>
#include<cmath>

using namespace std;

void sort(int arr[],int n){
    int temp=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }

        }
    }
}
int main(){
    int n=0,median=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int k=0;
    cin>>k;
    int arrb[n];
    for (int u = 0; u < n; u++)
    {
        arrb[u]=arr[u];
    }
    sort(arrb,n);
    if(n%2==0){
        median=((arrb[n/2]+arrb[(n/2)-1])/2);
    }
    else{
        median=arrb[n/2];
    }
    int res[n]={0};
    
    for(int j=0;j<n;j++){
        int count=0;
        for(int x=0;x<n;x++){
            if(abs(arrb[j]-median)>abs(arrb[x]-median)){
            count++;}
            if(abs(arrb[j]-median)==abs(arrb[x]-median)){
                if(arrb[j]>arrb[x]){
                    count++;
                }
            }

            

        }
        res[n-count-1]=arrb[j];
        

    }
    int resf[k];
    for (int l = 0; l < k; l++)
    {
        resf[l]=res[l];
    }
    sort(resf,k);
    for (int y = 0; y < k; y++)
    {
        cout<<resf[y]<<" ";
    }

    






    return 0;
}