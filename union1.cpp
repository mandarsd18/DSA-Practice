#include<iostream>
#include<vector>
#include<math.h>
#include <bits/stdc++.h> 
using namespace std;
int main(){
    vector<int>a{1,3,4,6,5};
    vector<int>b{1,2,7,8};
    vector<int>c;
    for (int i = 0; i < a.size(); i++)
    {
      c.push_back(a[i]);
    }
    for (int i = 0; i < b.size(); i++)
    {
      c.push_back(b[i]);
    }
    sort(c.begin(),c.end());
    int j=0;
    for (int i = 1; i < c.size(); i++)
    {
        if(c[i]!=c[j]){
            c[j+1]=c[i];
            j++;
        }
      
    }
    for (int i = 0; i <= j; i++)
    {
       cout<<c[i]<<endl;
    }
    



    
    return 0;
}