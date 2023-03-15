#include<iostream>

using namespace std;
void bubbleSort(float arr[],float weg[],float pri[], float n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[i]<arr[j])
                {
                    float temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                    
                    float temp1=weg[i];
                    weg[i]=weg[j];
                    weg[j]=temp1;
                    
                    float temp2=pri[i];
                    pri[i]=pri[j];
                    pri[j]=temp2;
                }
            }
        }
    }

int main(){
    int items;
    cin>>items;
    float weight[items],price[items],profit[items];
    int bag;
    for (int i = 0; i < items; i++)
    {
        cin>>weight[i];
    }
    for (int i = 0; i < items; i++)
    {
        cin>>price[i];
    }
    cin>>bag;
    for (int i = 0; i < items; i++)
    {
        profit[i]=price[i]/weight[i];
    }
    bubbleSort(profit,weight,price,items);
    //for (int i = 0; i < items; i++)
    //{
        //cout<<profit[i]<<" "<<endl;
    //}

    int j=0;
    int count=0;
    while(bag!=0){
        if(weight[j]<=bag){
            count+=price[j];
            
            
        }
        if(weight[j]>bag){
           
            count+=bag*profit[j];
            break;
        }
        bag-=weight[j];
        j++;


    }
    cout<<count;


    
}