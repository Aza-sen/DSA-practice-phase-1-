#include<iostream>
#include<math.h>

using namespace std;

void sort(float a[],int n){
    for(int i=0;i<n-1;i++){
        for (int j = 0; j < n-1; j++)
        { 
            float temp1=0;
            if(a[j]>a[j+1]){
                temp1=a[j+1];
                a[j+1]=a[j];
                a[j]=temp1;
                

            }
        }
        
    }
}
float median(float a[],int n){
    float median;
    if(n%2==0){
        median=(a[n/2]+a[(n/2)+1])/2;
    }
    else{
        median=a[n/2];
    }
    return median;
}
float mode(float a[],int n){
    int count=1,max=1;
    float temp=a[0],mode=0;
    for (int i =1 ; i < n; i++)
    {
        if(temp==a[i]){
            count++;

        }
        if(count>max){
            max=count;
            mode=temp;
        }
        if(temp!=a[i]){
            count=1;
            temp=a[i];
        }
        
    }
    return mode;
    
}
float variance(float data[],int n,float mean){
   float variance=0;
   for (int i = 0; i < n; i++)
   {
        variance += pow(data[i] - mean, 2);
   }
   variance=variance/n;
   return variance;

}

int main(){
   int n,maxmarks=0;
   cout<<"Enter the no of students: ";
   cin>>n;
   
   cout<<"Enter the maximum marks of the test: ";
   cin>>maxmarks;
   cout<<endl;
   float data[n];
   
   float sum=0,max=0;
   for (int i = 0; i < n; i++)
   {
        cin>>data[i];
        
        sum+=data[i];

 

   }
   sort(data,n);
   
   float mean=sum/n;
   cout<<"The mean of the data is: "<<mean<<endl;
   cout<<"median of the data is: "<<median(data,n)<<endl;
   cout<<"Mode of the data is: "<<mode(data,n)<<endl;
   cout<<"Variance of the data is: "<<variance(data,n,mean)<<endl;
   float counter=0;
   float a[maxmarks]={0};
   
   float mark=0;
    for (int i = 0; i < n; i++)
    {
            if(data[i]==mark){
                counter=counter+1;
            }
            else{
                a[mark]=counter;
                mark+=0.5;
                counter=1;

            }
    }
    for (int i = 0; i < maxmarks; i++)
    {
        cout<<a[i]<<endl;
    }
    for (int i = 0; i < maxmarks; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    
    
/*
    for (int i = max; i >= 0; i--)
        {
            for (int j = 1; j < maxmarks+3;j++)
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
        for (int i = 0; i < maxmarks+2; i++)
        {
            if(i==0 or i==1){
                cout<<"-";
            }
            else{
                cout<<"----------";
            }
        }
        cout<<endl;
        for (int i = 0; i < maxmarks+2; i++)
        {
            if(i==0 or i==1){
                cout<<"-";
            }
            else{
                cout<<"   "<<i-2<<"-"<<i-1-0.1<<"  ";
            }
        }
        cout<<endl;
        */

   



   



   



   
   
   
    return 0;



}