#include <iostream>

using namespace std;

int binary_search(int a[],int low,int high,int n){
    
    if(low>high){
        return -1;
    }
    int mid=low +(high-low)/2;
    
    if(a[mid]==n){
        return mid;
    }
    else if(a[mid]>n){
        binary_search(a,low,mid-1,n);
    }
    else{
        binary_search(a,mid+1,high,n);
    }
    
    
}

int main(){
    int l,n;
    cin>>l;
    int a[l];
    for(int i=0;i<l;i++){
        cin>>a[i];
    }
    cin>>n;
    cout<<binary_search(a,0,l-1,n);
    return 0;
}