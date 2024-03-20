#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<vector<int>> a{{1, 2, 3,4}, {4, 5, 6,6}, {7, 8, 9,15},{10,11,12,13}};
    int top = 0;
    int bottom = a[0].size() - 1;
    int left = 0;
    int right = a.size() - 1;
    int n = a.size();
    int m = a[0].size();
    vector<int> arr;
    while (top <= bottom && left <= right)
    {
        for (int i = left; i <= right; i++)
        {
            arr.push_back(a[top][i]);
        }
        top++;
        for (int i = top; i <= bottom; i++)
        {
            arr.push_back(a[i][right]);
        }
        right--;
        for (int i = right; i >= left; i--)
        {
            arr.push_back(a[bottom][i]);
        }
        bottom--;
        for (int i = bottom; i >= top; i--)
        {
            arr.push_back(a[i][left]);
        }
        left++;
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}