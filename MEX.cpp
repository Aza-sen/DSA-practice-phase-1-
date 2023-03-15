#include <iostream>

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
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        
    }
    sort(arr,n);
    int MEX=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0){
            if(arr[i]==MEX){
                MEX=arr[i]+1;
                
            }

        }
        
    }
    cout<<MEX;

    return 0;
}