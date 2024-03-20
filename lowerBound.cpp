#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
int lowerBound(vector<int> arr, int n, int key)
{
    int low = 0;
    int high = n - 1;
    int mid;
    int ans=n+1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if(arr[mid]>=key){
            ans=mid;
            high=mid-1;

        }else{
            low=mid+1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 6};
    int n = arr.size();
    int key = 5;
   
    
    cout<<lowerBound(arr, n, key);
    return 0;
}