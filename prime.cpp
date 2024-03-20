#include <iostream>
using namespace std;
void isPrime(int n)
{
    if (n == 1)
    {
        cout << "prime number" << endl;
    }
    int count = 2;
    while (count < n)
    {
        if (n % count == 0)
        {
            cout << "not number" << endl;
        }else{
            cout<<"Prime"<<endl;
        }
        count++;
    }
//    cout<<"prime"<<endl;
}
int main()
{
    cout<<"hello"<<endl;
    isPrime(5);
    return 0;
}