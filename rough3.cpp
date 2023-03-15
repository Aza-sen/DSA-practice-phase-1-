#include <iostream>
using namespace std;

bool foundCycle(int matrix[1005][1005], int dfsvisited[], int visited[], int i, int n)
{

    dfsvisited[i] = 1;
    visited[i] = 1;

    for (int j = 0; j < n; j++)
    {
        if (visited[j] == 0 and matrix[i][j] != 0 && foundCycle(matrix, dfsvisited, visited, j, n))
        {
            return true;
        }
        else if (dfsvisited[j] != 0 && matrix[i][j] != 0)
        {
            return true;
        }
    }

    dfsvisited[i] = 0;
    return false;
}

int main()
{
    int n;
    cin >> n;
    int m;
    cin >> m;

    int matrix[1005][1005] = {0};

    for (int i = 0; i < m; i++)
    {
        int u;
        int v;
        cin >> u >> v;
        matrix[u - 1][v - 1] = 1;
    }

    int dfsvisisted[n] = {0};
    int visited[n] = {0};

    for (int i = 0; i < n; i++)
    {
        if (visited[i] == 0 and foundCycle(matrix, dfsvisisted, visited, i, n))
        {
            cout << "No";
            return 0;
        }
    }

    cout << "Yes";
    return 0;
}