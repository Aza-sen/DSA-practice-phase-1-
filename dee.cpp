#include<iostream>
using namespace std;
int frequency(float a[], int n, float x)
{
    int count = 0;
    for (int i=0; i < n; i++)
       if (a[i] == x)
          count++;
    return count;
}

int main()
{
    int n;
    cin>>n;
    float A[n];
    
    for(int i=0;i<n;i++){cin>>A[i];}
    int a[30];
    int c=0;
    a[0]=20;
    for(int i=0;i<n;i++){int f=frequency(A, n, A[i]);
        int ab=2*A[i];
        if(ab!=0){
            if(f==1){break;}
            a[ab]=f;}
       
        if(c==28){break;}
    }
    
    
    
    for(float i=20;i>0;i--){
        if(i>=10){
            cout<<i<<" : ";}
        else{
            cout<<i<<"  : ";
        }
        for(float j=0;j<15;j+=0.5){
            int b=j*2;
            if(a[b]>=i){cout<<"#";}
            else{cout<<" ";}
            cout<<" ";
        }
        cout<<endl;
    }
    
    
    return 0;}