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

