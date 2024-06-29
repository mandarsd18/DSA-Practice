#include<iostream>
#include<string>
using namespace std;
string name="abcc";
void pallendrome(int st,int end){
    if(st>end){
        cout<<name;
        return;
    }
    swap(name[st],name[end]);
    pallendrome(st+1,end-1);

}
int main(){
    cout<<name<<endl;
    pallendrome(0,name.length()-1);
    cout<<name<<endl;
}