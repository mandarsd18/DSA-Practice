#include<iostream>
using namespace std;
int main(){
    string s="abbaf";
    int start=0;
    int end=s.size()-1;
    while(start<end){
        if(s[start]!=s[end])
        {
            cout<<"not pallindrome";
            return 0;
        }
        start++;
        end--;
    }
    cout<<"pallindrome";
}