#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int n=5;
    int start=0;
    int k=3;
    for(int i=0;i<k;i++){
        start=arr[0];
        for (int j = 1; j < n; j++)
        {
            
            arr[j-1]=arr[j];
        }
        arr[n-1]=start;
        
    }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}