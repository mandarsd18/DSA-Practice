#include<iostream>
using namespace std;
int main(){
    int n=3;
    int arr[]={1,3,2};
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
   int sum=0;
   for(int i=1;i<n;i++){
    sum+=abs(arr[i]-arr[i-1]);
   }
   cout<<sum;
}