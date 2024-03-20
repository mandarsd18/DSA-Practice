#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>a{1,1,0,1,1,1,1,1,0,1,1};
    int n=a.size();
    int count=0;
    int max=0;
    int tem=0;
    for (int i = 0; i < n; i++)
    {
       if(a[i]==1){
        count++;
        
       }else if(a[i]!=1){
        count=0;
       }
       if(count>max){
        max=count;
       }
    }
    cout<<max<<endl;
    
    return 0;
}