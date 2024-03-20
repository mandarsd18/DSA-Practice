#include <iostream>
#include <vector>
using namespace std;
int firstPosition(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
    return -1;
}
int lastPosition(int a[], int n, int k)
{
    int last = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            last = i;
        }
    }
    return last;
}
int main()
{
    int a[] = {1, 2, 3, 3, 3, 4, 5};
    int n = 7;
    int first = 0;
    int last = 0;
    first = firstPosition(a, n, 2);
    last = lastPosition(a, n, 2);
    cout << "first Position " << first << endl;
    cout << "last Position " << last << endl;

    return 0;
}