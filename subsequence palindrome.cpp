#include<iostream>
#include<string>


using namespace std;

string Delete(string s,int n){
    string g;
    for(int i=0;i<s.length();i++){
        if(i!=n){g+=s[i];}
    }

    return g;
}

int main(){
    string s;
    cin>>s;
    int l=s.length();
    int i=0,j=l-1;
    while(i!=j){
        if(s[i]==s[j]){
            i++;
            j--;
        }
        if(s[i]!=s[j]){
            if(s[i+1]==s[j]){
               s=Delete(s,i);
               i++;
               

            }
            if(s[j-1]==s[i]){
                s=Delete(s,j);
                
                j--;
            }
        }
    }
    int L=s.length();
    cout<<L;
    
}

