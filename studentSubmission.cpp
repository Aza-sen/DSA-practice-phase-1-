#include <iostream>
#include <string.h>

#include <cctype>

using namespace std;

class stack
{
    int top = -1;

public:
    char a[100];
    void push(char n)
    {
        ++top;
        a[top] = n;
    }
    void pop()
    {
        if (isEmpty())
        {
            ;
        }
        else
        {

            --top;
        }
    }
    char peek()
    {
        if (top == -1)
        {
            return -1;
        }
        else
        {
            return a[top];
        }
    }
    int size()
    {
        return top + 1;
    }
    int isEmpty()
    {
        if (top == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
int palindrome(stack st, string temp)
{
    string s;
    int l = st.size();
    for (int i = 0; i < l; i++)
    {

        s = s + st.peek();
        st.pop();
    }

    if (s == temp)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int l = 0;
    stack st;
    string s, tempo;

    cin >> s;

    l = s.length();

    for (int i = 0; i < l; i++)
    {
        st.push(s[i]);
    }

    cout << palindrome(st, s);
    return 0;
}