#include<iostream>
#include<queue>
#include<string>

using namespace std;

class que{
    int f=-1,b=-1;
    public:
    string a[100000];
    int empty(){
        if(f==-1 && b==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(string n){
        if(f==-1){
            f=0;
        }
        ++b;
        a[b]=n;

    }
    void pop(){
        if(empty()){
            ;
        }
        else{
            if(f==b){
                f=b=-1;
            }
            else{
                ++f;
            }
        }
    }
    string front(){
        if(empty()){
            return "-1";
        }
        else{
            return a[f];
        }
    }

};

int modBigNumber(string num, int m)
{
    int mod = 0;
 
    for (int i = 0; i < num.size(); i++) {
          
        int digit = num[i] - '0';
 
        mod = mod * 10 + digit;

        int quo = mod / m;

        mod = mod % m;       
    }
 
 
    return mod;
}


int main(){
    int n;
    cin>>n;
    que q;
    string res="0";
    if(n > 0){

        q.push("1");
        while(q.empty()!=1){
            string f= q.front();
            if(modBigNumber(f,n) == 0){
                res=f;
                break;
            }
            q.pop();
            q.push(f+"0");
            q.push(f+"1");
        }
    }
    cout<<res<<endl;
}