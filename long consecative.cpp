#include<iostream>
#include<cmath>
using namespace std;

void Merge(int A[],int l,int mid,int h){
    int i=l,j=mid+1,k=l;
    int B[h+1];
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
    int n=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n);
    int count=1,max=1;
    for(int j=0;j<n-1;j++){
        if(arr[j+1]==arr[j]+1){
            count++;
            if(count>max){
                max=count;
            }

        }
        if(arr[j+1]!=arr[j]+1){
            count=1;
        }
    }
    cout<<max;
}