#include<iostream>
#include <bits/stdc++.h>

using namespace std;
int findPairs(int arr1[], int arr2[], int n,int m, int x)
{   int count=0;
    
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]);
 
    
    for (int j = 0; j < m; j++)
        if (s.find(x - arr2[j]) != s.end()){
            ++count;
        }
    return count;
}

int main(){
    int k=0,n=0;
    long r=0;
    cin>>n>>k;
    int a[n],a1[n],a2[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];

    }
    for (int i = 0; i < n; i++)
    {
        a1[i]=(k*a[i])%n;
    }   
    for (int i = 0; i < n; i++)
    {
        a2[i]=a[i]%n;

    }
    int count1=0,count2=0,count3=0;
    for (int i = 0; i < n; i++)
    {
        if(a1[i]==0){
            count1++;
        }

    }
    for (int i = 0; i < n; i++)
    {
        if(a2[i]==0){
            count2++;
        }

    }
    count3=findPairs(a1,a2,n,n,n);
    cout<<count3;
    r=count1*count2+count3+1;
    cout<<r;



    


    
    
    return 0;

}


