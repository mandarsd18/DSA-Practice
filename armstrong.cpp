#include <bits/stdc++.h>
using namespace std;
bool isArmstrong(int n){
    int sum=0;
    int rem;
    int num=n;
    while(num!=0){
        rem=num%10;
        sum+=rem*rem*rem;
        num=num/10;
    }
    if(sum==n){
        return true;
    }
    return false;
}
int main()
{
    bool armstrong;
    for(int i=1;i<1000;i++){
        armstrong=isArmstrong(i);
        if(armstrong){
            cout<<i<<endl;
        }
    }
    // while (n != 0)
    // {
    //     digit = n % 10;
    //     sum += digit * digit * digit;
    //     n = n / 10;
    // }
    // cout << sum;
    // if (sum == 153)
    // {
    //     cout << "armstrong" << endl;
    // }
    // else
    // {
    //     cout << "not armstrong" << endl;
    // }

   
    return 0;
}