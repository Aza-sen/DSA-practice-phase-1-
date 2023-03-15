#include<iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i]=-1;
    }
    
    int m;
    cin>>m;
    int count=0;
    
    for (int i = 0; i < m; i++)
    {
        int temp;
        cin>>temp;
        int index=temp%n;
        if(arr[index]!=-1){
            count++;
            //arr[index]=temp;
        }
        else{
            arr[index]=temp;
        }
        

    }
    cout<<count;
    
}