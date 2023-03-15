#include<iostream>
#include<string>

using namespace std;

int main(){

    string s;
    cin>>s;

    int l=s.length();

    int L;
    for (int i = 0; i < l-1; i++)
    {
        string temp="";
        
        if(s[i+1]=='['){
            L = (int)s[i]-48;
            
            
        }
        
        if(s[i]=='['){
            int j=i+1;
            while(s[j]!=']'){
                
                temp=temp+s[j];
                j++;
            }
            for(int z=0;z<L;z++){
            cout<<temp;
        }
        
        }
        
        

        
    }
    


}