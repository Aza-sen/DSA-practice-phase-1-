#include<iostream>
#include<algorithm>

using namespace std;



int main(){
    int n;
    cin>>n;

    for (int i = 0; i < n; i++)
    {
        int m;
        cin>>m;
        int b[m],l[m];
        long long int perimeter=0;
        for(int j=0;j<m;j++){
            int lt,bt;
            cin>>lt>>bt;
            if(lt>=bt){
                l[j]=lt;
                b[j]=bt;
            }
            else{
                b[j]=lt;
                l[j]=bt;
            }
            

        }
        for(int j=0;j<m;j++){
            perimeter+=b[j];
            

        }
        perimeter=2*perimeter;
        

        
        sort(l,l+m);
        if(m==1){
            perimeter+=l[0];
        }
        for(int o=0;o<m-1;o++){
            if(o==0){
                perimeter+=l[o];
            }
            if(l[o]<l[o+1]){
                perimeter+=l[o+1]-l[o];

            }

        }
        perimeter+=l[m-1];

        cout<<perimeter<<endl;

        

    }
    
}