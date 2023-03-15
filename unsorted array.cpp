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
    int arr[n],sortarr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sortarr[i]=arr[i];
    }
    sort(sortarr,n);
    int p1=0,p2=n-1;
    while (p1!=p2)
    {
        if(arr[p1]==sortarr[p1]){
            p1++;
        }
        if(arr[p2]==sortarr[p2]){
            p2--;
        }
        if(arr[p1]!=sortarr[p1] and arr[p2]!=sortarr[p2]){
            break;
        }
    }
    cout<<p2-p1+1<< endl;

    if(p2-p1+1<=1){
        cout<<"-1";
    }
    else{
        cout<<p2-p1+1;
    }
    
    
    return 0;

}