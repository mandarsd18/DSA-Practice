#include<iostream>
using namespace std;
int fibo(int n){
    int count=2;
    int num1=0;
    int num2=1;
    int temp=0;
    while (count<=n)
    {
        temp=num2;
        num2=num1+num2;
        num1=temp;
        count++;
    }
    return num2;
    

}
int main(){
   
    cout<<fibo(8);
    return 0;
}