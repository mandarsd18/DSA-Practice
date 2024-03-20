#include<iostream>
#include <vector>
using namespace std;
int main(){
    int arr[]={0,0,0,1};
    int n=4;
    vector<int>arr2;
    for (int i = 0; i <n; i++)
    {
       if(arr[i]!=0){
        arr2.push_back(arr[i]);
       }
    }
    cout<<arr2.size();
   for(int i=1;i<n;i++){
    arr2[i]=0;
   }
//    for(int i=0;i<n;i++){
//     cout<<arr2[i]<<endl;
//    }

    return 0;
}