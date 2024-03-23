#include <bits/stdc++.h>
using namespace std;
int rotatedBinary(vector<int> arr,int n,int key){
     int low = 0;
    int high = n - 1;
    int mid;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == key)
        {
return mid;        }
        if(arr[low]<=mid){
            if(arr[low]<=key && arr[mid]>=key){
                high=mid-1;
            }else{
                low=mid+1;
            }

        }else{
            if(arr[mid]<=key && arr[high]>=key){
                low=mid+1;
            }else{
                high=mid-1;
            }

        }
    }
    return -1;
}
int main()
{
    vector<int> arr{7, 8, 1, 2, 3, 4};
    int n = arr.size();
   
    int key = 4;
    
   int ans=rotatedBinary(arr,n,key);
   cout<<ans<<endl;

    return 0;
}