#include<iostream>
using namespace std;
int binarySearch (int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2;
    while (start<=end){
        if(arr[mid]==key){
          return mid;
        }
        if(key<arr[mid]){
            end=mid-1;
        }
        if (key>arr[mid])
        {
           start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
   
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;
    cout<<binarySearch(arr,n,6)<<endl;
    return 0;
}