#include<iostream>

using namespace std;
int partition(int arr[],int f,int b){
    int pivot=arr[b];
    int index=f;
    for (int i = f; i < b; i++)
    {   int temp=0;
        if(arr[i]<=pivot){
            temp=arr[index];
            arr[index]=arr[i];
            arr[i]=temp;
            index++;

        }

    }
    int temp1=arr[index];
    arr[index]=arr[b];
    arr[b]=temp1;
    return index;
    

}
void quick_sort(int arr[],int f,int b){
    int index;
    if(f<b){
        index=partition(arr,f,b);
        quick_sort(arr,f,index-1);
        quick_sort(arr,index+1,b);
        
        
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n],res[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    quick_sort(arr,0,n-1);

    /*for (int j =0; j<n; j++)
    {
        res[n-1-1]=arr[j];
    }*/
    for (int u = 0; u < n; u++)
    {
        cout<<arr[u]<<" ";
    }


    
}