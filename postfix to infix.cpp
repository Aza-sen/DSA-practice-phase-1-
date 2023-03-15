#include <iostream>
#include <string.h>

using namespace std;

class stack
{
    int to = -1;

public:
    int a[__INT8_MAX__];
    void push(int n)
    {
        ++to;
        a[to] = n;
    }
    void pop()
    {
        if (isEmpty())
        {
        }
        else
        {
            --to;
        }
    }
    int top()
    {
        if (to == -1)
        {
            return -1;
        }
        else
        {
            return a[to];
        }
    }
    void size()
    {
        cout << to + 1 << endl;
    }
    int isEmpty()
    {
        if (to == -1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};

int main()
{
    int n, count = 0;
    int arr[n], ans[n];
    stack s;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        while (s.isEmpty() == 0 && arr[s.top()] <= arr[i])
        {
            s.pop();
        }
        if (s.isEmpty())
        {
            ans[i] = i + 1;
        }
        else
        {
            ans[i] = i - s.top();
        }
        s.push(i);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}