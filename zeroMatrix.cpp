#include <iostream>
#include <vector>
using namespace std;
void rowZero(int i, int m, vector<vector<int>> &a)
{
    for (int j = 0; j < m; j++)
    {
        if (a[i][j] != 0)
        {
            a[i][j] = -1;
        }
    }
}
void colZero(int j, int m, vector<vector<int>> &a)
{
    for (int i = 0; i < m; i++)
    {
        if (a[i][j] != 0)
        {
            a[i][j] = -1;
        }
    }
}
int main()
{
    vector<vector<int>> a{
        {1, 1, 0},
        {1, 1, 1},
        {1, 1, 0}};
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == 0)
            {
                rowZero(i, a[i].size(), a);
                colZero(j, a[i].size(), a);
            }
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            if (a[i][j] == -1)
            {
                a[i][j] = 0;
            }
        }
        cout << endl;
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}