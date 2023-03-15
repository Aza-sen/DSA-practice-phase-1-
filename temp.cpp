#include <iostream>
#include <string.h>


using namespace std;

class stack{
    int top=-1;
    public:
    string a='';
    void push(char n){
        ++top;
        a[top]=n;
    }
    void pop(){
        if(isEmpty()){
            ;

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
    stack s;
    cin>>s;
    cout<<s.peek();
}