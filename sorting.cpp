#include <iostream>
using namespace std;
void selection_sort(int arr[], int n)
{
    // Selection sort selet the minimum from entire array and swap it with the first position
    // selecting minimum is the key
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void bubble_sort(int arr[], int n)
{
    for (int j = 0; j < n - 1; j++)
    {
        for (int i = 0; i < n - j - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {2, 1, 5, 4, 10, 9, 3};
    int n = 7;
    // selection_sort(arr, n);
    // bubble_sort(arr, n);

    return 0;
}