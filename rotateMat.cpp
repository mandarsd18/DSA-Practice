#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int main(){
vector<vector<int>> a{{1,2,3},{4,5,6},{7,8,9}};

int n=a.size();
int m=a[0].size();
// vector<vector<int>> ans(n,vector<int>(n,0));

// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
        
//         ans[j][n-i-1]=a[i][j];
        
//     }
// }

for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
       swap(a[j][i],a[i][j]);
    }
}
for(int i=0;i<n;i++){
    reverse(a[i].begin(),a[i].end());
}

for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}