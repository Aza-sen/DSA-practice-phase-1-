#include <iostream>

using namespace std;





int main(){
    int n;

    cin>>n;
    int arr[n];
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
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
    
    int count=1;
    for(int i=0;i<n;i++){
        if(count==3){
            cout<<arr[i]<<" ";
        }
        if(arr[i]==arr[i+1]){
            count+=1;

        }

        
        if(arr[i]!=arr[i+1]){
            count=1;

        }
    }

    return 0;
}
