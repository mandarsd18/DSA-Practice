#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a{1,2,3,4,5};
    int target=5;
    int n=a.size();
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]+a[j]==target){
                cout<<a[i]<<a[j]<<endl;
            }

        }
    }
    return 0;
}