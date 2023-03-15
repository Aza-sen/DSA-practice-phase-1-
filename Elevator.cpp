#include<iostream>
#include<string.h>

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
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    int floor;
    cin>>floor;
    string s;
    cin>>s;
    sort(a,n);
    int ptr1=0,ptr2=0,flag=0;
    for(int i=0;i<n;i++){
        if(a[i]==floor){
            ptr1=ptr2=i;
            break;
        }
        else if(a[i]>floor){
            ptr1=ptr2=i;
            flag=1;
            break;            
        }
    }
    if(s=="UP"){
        for(ptr1;ptr1<n;ptr1++){
            cout<<a[ptr1]<<" ";

        }
        ptr2=ptr2-1;
        for(ptr2;ptr2>=0;ptr2--){
            cout<<a[ptr2]<<" ";
        }
        
    }
    if(s=="DOWN"){
        if(flag==1){
            ptr1=ptr1-1;
        }
        else{
            ptr2=ptr2+1;
        }
        for(ptr1;ptr1>=0;ptr1--){
            cout<<a[ptr1]<<" ";

        }
        for(ptr2;ptr2<n;ptr2++){
            cout<<a[ptr2]<<" ";
        }
        
    }
    return 0;
}