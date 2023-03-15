/* #include<iostream>

using namespace std;

int maxu(int a,int b){
    if(a>=b) return a;
    else return b;
}

int problem(int n,int arr[],int dp[]){

}

int main(){

    int n;
    cin>>n;
    

    int *arr = new int[n];
    int dp[n]={-1};
    dp[n-1]=1;

    for (int i = 0; i < n; i++)
    {
        cin>>arr[n];
    }

    cout<<problem(n,arr,dp)
    

}
*/
#include <iostream>
using namespace std;

int maxu(int a,int b){
    if(a>=b) return a;
    else return b;
}
void longest_sub(int arr[], int n,int length[]) {
    
    for (int i = 1; i < n; i++) {    
      for (int j = 0; j < i; j++) {    
         if (arr[j] < arr[i] && length[j] + 1 > length[i])
            length[i] = length[j];
      }
      length[i]+=1;
   }
   
}

int main() {
   int n;
   cin>>n;
   int arr[n];
   for (int i = 0; i < n; i++)
   {
        cin>>arr[i];
   }

   int length[n]={1};

   
   
   longest_sub(arr, n,length);
   int maxl = 0;
   for (int i = 0; i<n; i++) 
      maxl = maxu(maxl, length[i]);
   cout<<maxl;
   
   return 0;
}



