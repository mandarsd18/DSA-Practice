#include<iostream>
#include<stdio.h>
using namespace std;
 int arr[]={1,45,2,4};
void reverse(int start, int end){
    if(start>end){
        for(int i=0;i<4;i++){
            cout<<arr[i]<<endl;
        }
        return ;
    }
    swap(arr[start],arr[end]);
    reverse(start+1,end-1);

}
int main(){
    reverse(0,3);
   }
