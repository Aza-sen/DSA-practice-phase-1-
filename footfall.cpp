#include <iostream>

using namespace std;



int max_log=0;
void input_data(int n,int o,int p,int arr[]){
    arr[n]=arr[n]+p;
    arr[o]=arr[o]-p;
    

}

void max(int arr[],int mac){
    int temp_attendance=0,i=0;
    temp_attendance=max_log=0;
    
    

    for(i=0;i<mac;i++){
        temp_attendance=temp_attendance+arr[i];
        if(temp_attendance>=max_log){
            max_log=temp_attendance;
        }
        
        
        

    }
    cout<<max_log;

    }

int main(){
    int n;
    cin>>n;
    int arr[1001]={0};
    int a=0,b=0,c=0;
    int temp=0;
    int mac=0;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(b>mac){mac=b;}
        input_data(a,b,c,arr);
        a=b=c=0;
    }
    max(arr,mac);









    return 0;
}

