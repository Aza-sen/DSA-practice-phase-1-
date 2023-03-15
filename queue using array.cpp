#include <iostream>
#include <string.h>
#include <queue>

using namespace std;

/*class queue{
    int f=-1,b=-1;
    public:
    int a[__INT8_MAX__];
    int isEmpty(){
        if(f==-1 && b==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void push(int n){
        if(f==-1){
            f=0;
        }
        ++b;
        a[b]=n;

    }
    void pop(){
        if(isEmpty()){
            cout<<"queue is empty"<<endl;
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
    void front(){
        if(isEmpty()){
            cout<<-1<<endl;
        }
        else{
            cout<<a[f]<<endl;
        }
    }
    void back(){
        if(isEmpty()){
            cout<<-1<<endl;
        }
        else{
            cout<<a[b]<<endl;
        }
    }
    void size(){
        if(isEmpty()){
            cout<<0<<endl;
        }
        else{
            cout<<b-f+1<<endl;
        }
    }
};*/
class stack
{
    queue<int> q;

public:
    int e;

    void push(int x)
    {
        q.push(x);
    }
    int size()
    {
        return q.size();
    }
    int isEmpty()
    {
        if (q.empty())
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    void top()
    {
        cout << q.back() << endl;
    }
    void pop()
    {
        e = q.size();
        for (int i = 0; i < e - 1; i++)
        {
            int temp = 0;
            temp = q.front();
            q.push(temp);
            q.pop();
        }
    }
};

int main()
{
    char ops[10];
    int t, l,count=0;
    stack s;
    cin >> l;
    for (int j = 0; j < l; j++)
    {
        cin >> ops;
        if (strcmp(ops, "push") == 0 or strcmp(ops, "Push") == 0)
        {
            cin >> t;
            s.push(t);
        }
        if (strcmp(ops, "pop") == 0)
        {
            s.pop();
            count=++count;
        }

        if (strcmp(ops, "top") == 0)
        {
            s.top();
        }
        if (strcmp(ops, "size") == 0)
        {
            cout<<s.size()-count<<endl;
        }
        if (strcmp(ops, "isempty") == 0)
        {
            cout << s.isEmpty() << endl;
        }
    }

    return 0;
}
