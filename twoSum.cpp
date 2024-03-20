#include<iostream>
using namespace std;
int main(){
    int arr[]= {1,2,4,5,3,1};
    int target=3;
    int n=6;
int start=0;
    for(int i=1;i<n;i++){
        if(arr[start]+arr[i]==target){
            cout<<"found";
        }
        start++;
    }

    return 0;
}