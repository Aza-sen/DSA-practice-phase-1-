#include<iostream>
#include<string.h>

using namespace std;


int main(){
    string s;
    int x,A=0,B=0,C=0,a=0,b=0,c=0;
    int c1=0,c2=0,c3=0;
    cin>>s;
    x=s.length();
    for(int i=0;i<x;i++){
        if(s[i]=='(' or s[i]==')'){
            //S=small(s[i]);
            
            if(s[i]=='('){
                c1=++c1;

            }
            if(s[i]==')'){
                c1=--c1;
            }
            if(c1<0){
                break;
            }
            

            

        }
        if(s[i]=='{' or s[i]=='}'){
            
            if(s[i]=='{'){
                c2=++c2;

            }
            if(s[i]=='}'){
                c2=--c2;
            }

            if(c2<0){
                break;
            }
        }
        if(s[i]=='[' or s[i]==']'){
            
            if(s[i]=='['){
                c3=++c3;

            }
            if(s[i]==']'){
                c3=--c3;
            }

            if(c3<0){
                break;
            }
            }



    }
    //cout<<c1<<c2<<c3<<s;
    if(c1==0 and c2==0 and c3==0){
        cout<<1;
    }
    else{
        cout<<0;
    }
    return 0;
}