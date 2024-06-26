#include<iostream>
using namespace std;
void add(int i,int sum){
    //base case which is use to stop the loop from going into infinite format
    if(i<1){
        cout<<sum<<endl;
        return;
    }else{
        add(i-1,sum+i);
    }
   
}
int main(){
    
    add(5,0);
}