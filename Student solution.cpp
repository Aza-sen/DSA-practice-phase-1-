#include <iostream>
#include <string.h>


using namespace std;

class stack{
    int to=-1;
    public:
    int a[__INT8_MAX__];
    void push(int n){
        ++to;
        a[to]=n;
    }
    void pop(){
        if(isEmpty()){
            

        }
        else{--to;}
    }
    int top(){
        if(to==-1){
            return -1;
        }
        else{
            return a[to];
            
        }


    }
    void size(){
        cout<<to+1<<endl;
    }
    int isEmpty(){
        if(to==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
};

class Minimum_stack{
    stack s,stemp;
    public:
    void push(int v){
        s.push(v);
        if(stemp.isEmpty()){
            stemp.push(v);
        }
        else{
            if(stemp.top()>=v){   //equal to because is same min value is reapeted but poped earlier
            stemp.push(v);
        }
        }


    }
    void pop(){
        int topval=s.top();
        s.pop();
        if(stemp.top()==topval){
            stemp.pop();
        }


    }
    void top(){
        cout<<s.top()<<endl;
    }

    void getmin(){
        cout<<stemp.top()<<endl;
    }





};





int main(){
    char ops[10];
    int temp,a;
    Minimum_stack s;
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>ops;
        if(strcmp(ops,"push")==0 or strcmp(ops,"Push")==0){
            cin>>temp;
            s.push(temp);
        }
        if(strcmp(ops,"pop")==0){
            s.pop();
        }
        if(strcmp(ops,"top")==0){
            s.top();

        }

        
        if(strcmp(ops,"getmin")==0){
            s.getmin();
        }
        }




    return 0;
}