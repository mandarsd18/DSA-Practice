#include<iostream>
#include<vector>
using namespace std;
int main(){
    string s="aabbccdefdAA";
    int count=0;
    int odd=0;
    vector<int>lower(26,0);
    vector<int>upper(26,0);

    for(int i=0;i<s.size();i++){
        if(s[i]>='a'){
            lower[s[i]-'a']++;
        }
        if(s[i]>='A'){
            upper[s[i]-'A']++;
        }
    }
    // for(int i=0;i<26;i++){
    //     cout<<lower[i]<<endl;
    // }

    for(int i=0;i<26;i++){
        if(lower[i]%2==0){
            count+=lower[i];
        }else{
            count+=lower[i]-1;
            odd=1;
        }
        if(upper[i]%2==0){
            count+=upper[i];
        }else{
            count+=upper[i]-1;
            odd=1;
        }
    }
    cout<<count+odd<<endl;


}