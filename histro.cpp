#include<iostream>

using namespace std;

int main(){
    int a[]={4,6,3,8,9,3,6};
    int n=7;
    int max=9;
    for (int i = max; i >= 0; i--)
    {
        for (int j = 1; j < n+3;j++)
        {
            if(j==1 || j==2){
                if(j==1){
                    cout<<i;
                }
                if(j==2){
                    cout<<"|";
                }

            }
            else{
                if(a[j-3]>=i){
                    cout<<"**********";
                }
                else{
                    cout<<"          ";
                }
            }
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n+2; i++)
    {
        if(i==0 or i==1){
            cout<<"-";
        }
        else{
            cout<<"----------";
        }
    }
    cout<<endl;
    for (int i = 0; i < n+2; i++)
    {
        if(i==0 or i==1){
            cout<<"-";
        }
        else{
            cout<<"   "<<i-2<<"-"<<i-1-0.1<<"  ";
        }
    }
    cout<<endl;
    

    
    
    

    

}