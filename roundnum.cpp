#include<iostream>
#include<set>
using namespace std;
int countSum(int n){
    int sqr=0;
    int dgt;
    while(n){
        dgt=n%10;
        sqr+=(dgt*dgt);
        n=n/10;
    }
    return sqr;

}
int main(){
    int n =23;
    set<int>s;
    s.insert(n);
    while(1){
        if(n==1){
        cout<<"round no";
        return true;
        }
        n=countSum(n);
        if(s.find(n)!=s.end()){
            cout<<"not happy";
            return false;
        }
        s.insert(n);   
    }
    cout<<"not happy";
    return 0;

}