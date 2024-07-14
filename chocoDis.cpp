#include <bits/stdc++.h>
using namespace std;
int main(){
    int choco[]={3,4,1,9,56,7,9,12};
    // int arr[] = { 1,3,4,7,9,9,12,56}
    int n=sizeof(choco)/sizeof(choco[0]);
    int m=5;
    int start;
    int end;
    int mindif=INT_MAX;
    sort(choco,choco+n);
    for(int i=0;i<n-m;i++){
        if((choco[i+m-1]-choco[i]) < mindif){
            mindif=choco[i+m-1]-choco[i];
            start=choco[i];
            end=choco[i+m-1];
            // cout<<mindif<<endl;
            // cout<<"1";
        }
    }
    cout<<mindif<<endl;
    cout<<start<<endl;
    cout<<end<<endl;
    
}