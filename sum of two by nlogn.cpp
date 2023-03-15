#include <iostream>
#include <cmath>

using namespace std;

void merge_sort(int arr[],int n){
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
void Merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[100];
    while(i<=mid && j<=h){
        if(A[i]<A[j]){
            B[k++]=A[i++];
        }
        else{
            B[k++]=A[j++];
        }
    }
    for(;i<=mid;i++){
        B[k++]=A[i];
    }
    for(;j<=h;j++){
        B[k++]=A[j];
    }
    for(int i=l;i<=h;i++){
        A[i]=B[i];
    }
}
void merge_sort(int a[],int l,int h){
    if(l<h){
        int mid=floor((l+h)/2);
        merge_sort(a,l,mid);
        merge_sort(a,mid+1,h);
        Merge(a,l,mid,h);
    }

}

int main(){
    int n=0,k=0;
    cin>>n>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    merge_sort(arr,0,n);
    
    int count=0;
    int l=n-1,f=0;
    while(f!=l){
        if((arr[f]+arr[l])>k){
            l=l-1;
        }
        if((arr[f]+arr[l])<k){
            f=f+1;
        }
        if((arr[f]+arr[l])==k){
            cout<<"1";
            count=1;
            break;
        }
    }
    if(count==0){
        cout<<"0";
    }
}