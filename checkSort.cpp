#include<iostream>
using namespace std;
int main(){
    int a[]={1,2,3,5,4};
    int count=0;
    for(int i=1;i<5;i++){
        if(a[i]>=a[i-1]){
            count=1;
        }else{
            count=0;
        }

    }
    cout<<count<<endl;
    return 0;
}