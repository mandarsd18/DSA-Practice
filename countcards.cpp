#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=3;
    int level=1;
    int cards=0;
    while(level<=n){
        cards=cards+(level*3);
        level++;
    }
    cout<<cards-n;
}