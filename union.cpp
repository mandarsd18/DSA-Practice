#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    int a[]={1,3,2,4};
    int b[]={1,5,6};
set<int>s;
for (int i = 0; i < 4; i++)
{
    s.emplace(a[i]);
}
for (int i = 0; i < 3; i++)
{
    s.emplace(b[i]);
}

 for (auto it = s.begin(); 
         it != s.end();it++) 
        cout << ' ' << *it; 
    return 0; 
}