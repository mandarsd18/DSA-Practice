#include<bits/stdc++.h>
using namespace std;
int numberofbulb(int n){
    return sqrt(n);
}
int main(){
    int n;
    cin>>n;

    //for total number of bulb ,square root of that bulb will on after number of bulb iteration times 
    // suppose we have 4 bulb then 
    // b1  b2  b3  b4
    // on  on  on  on   1st 
    // on  off on  off  2nd
    // on  off off off  3rd
    // on  off off on   4rth
    //so only 2 bulb are on at last
    int ans=numberofbulb(n);
    cout<<ans;
    return 0;
}