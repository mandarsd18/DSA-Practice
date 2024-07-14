#include<bits/stdc++.h>
using namespace std;
int main(){
    int num[]={12,11,34,56,1};
    int max=0;
    int ind;
    for(int i=0;i<5;i++){
        if(num[i]>max){
            max=num[i];
            ind=i;
        }
    }
    cout<<"max number "<<max<<" at "<<ind<<endl;
    return 0;
}