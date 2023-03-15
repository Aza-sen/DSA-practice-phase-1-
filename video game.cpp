#include <iostream>

using namespace std;
#include <iostream>
#include <cmath>

using namespace std;
/*int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
 
    
        if (arr[m] == x)
            return m+1;
        
 

        if (arr[m] < x)
            l = m + 1;
 
        if(arr[m]< x)
            r = m - 1;
    }
 

    return -1;
}*/

/*void merge_sort(int arr[],int n){
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

}*/

int main(){
    int n=0,m=0;
    cin>>n>>m;
    int arrp[n],arrf[m],sumarr[n],res[m];
    int sum=0;
    
    for(int i=0;i<n;i++){
        cin>>arrp[i];
        
        sum=sum+arrp[i];
        
    }
    for(int y=0;y<m;y++){
        cin>>arrf[y];
    }
    

    
    int j=n-1;
    while(j>=0){
        sumarr[j]=sum;
        sum=sum-arrp[j];
        j=j-1;
        

        
    }
    /*for(int u=0;u<m;u++){
        int temp=arrf[u];
        int count=0;
        for(int v=0;v<n;v++){
            if(temp>=arrp[v]){
                count=count+1;
            }
            temp=temp-arrp[v];
            if(temp<arrp[v]){
                break;
            }



        }
        cout<<count<<" ";
        count=0;
    }*/
    int u=0,v=0;
    while(u<m && v<n) {
        if(arrf[u] > sumarr[v]) {
            v++;
        } 
        else {
            res[u] = v+1;
            u++;
        }
   }
   for (int z = 0; z <n; z++)
   {
    cout<<res[z]<<" ";
   }
   


    
    




    return 0;

}