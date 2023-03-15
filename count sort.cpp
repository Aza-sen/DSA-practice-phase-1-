#include <iostream>

using namespace std;

void cout_sort(int a[],int l){

}
int main(){
    int n;
    cin>>n;
    int a[n],res[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   
    int a2[1001]={0};
    for (int i = 0; i < n; i++)
    {
        a2[500+a[i]]+=1;
    }
    for (int i = 0; i < 1000; i++)
    {
        a2[i+1]=a2[i]+a2[i+1];
    }
    for (int i = 0; i < n; i++)
    {
        res[a2[500+a[i]]-1]=a[i];
        a2[500+a[i]]=a2[500+a[i]]-1;
    } 
    for (int i = 0; i < n; i++)
    {
        cout<<res[i]<<" ";
    }    
    

}