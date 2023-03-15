#include <iostream>
#include <cmath>

using namespace std;

void bubble_sort(int arr[],int n){
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
    int n=0,m=0;
    cin>>n>>m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    bubble_sort(a,n);
    int sum=0,count=0;;
    int j=0;
    while(j<n)
    {
        if(a[j]+a[j+1]<=m){
            count++;
            j=j+2;

        }
        else if(a[j]<=m or a[j]>=m){
            count++;
            j++;
        }
    }
    cout<<count;
    
    
    
    
    return 0;
}
    
    

