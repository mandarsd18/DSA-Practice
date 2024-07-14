#include <bits/stdc++.h>
using namespace std;
int main()
{
    int area[] = {64, 81, 30,41,87,100};
    int n = 6;
    // int ans = 0;
    // int ans2 = 0;
    // int count = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     ans = sqrt(area[i]);
    //     ans2 = pow(ans, 2);
    //     if (area[i] == ans2)
    //     {
    //         count++;
    //     }
    // }
    // cout<<count<<endl;
    int count=0;
    for(int i=0;i<n;i++){
        if(ceil((double)sqrt(area[i]))==floor((double)sqrt(area[i]))){
            count++;
        }
    }
    cout<<count;

    return 0;
}