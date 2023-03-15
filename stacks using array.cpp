#include <iostream>
#include <string.h>
#include<stack>

using namespace std;

class stack{
    int top=-1;
    public:
    int a[__INT8_MAX__];
    void push(int n){
        ++top;
        a[top]=n;
    }
    void pop(){
        if(isEmpty()){
            cout<<"Stack is empty"<<endl;

        }
        else{--top;}
    }
    int peek(){
        if(top==-1){
            return -1;
        }
        else{
            return a[top];
            
        }


    }
    void size(){
        cout<<top+1<<endl;
    }
    int isEmpty(){
        if(top==-1){
            return 1;
        }
        else{
            return 0;
        }
    }

    
    
    
    
    
};



int main(){

    char ops[10];
    int temp,a;
    stack s;
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
        if(strcmp(ops,"peek")==0){
            cout<<s.peek()<<endl;

        }
        if(strcmp(ops,"size")==0){
            s.size();
        }
        if(strcmp(ops,"isempty")==0){
            cout<<s.isEmpty()<<endl;
        }
        }
        
    
    


    return 0;
}