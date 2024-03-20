#include<iostream>
#include<vector>
using namespace std;
int main(){
   vector<vector<int>> a{
        {1, 1, 0},
        {1, 1, 1},
        {1, 1, 0}};
    int n=a.size();
    int m=a[0].size();
    int row[n]={0};
    int col[m]={0};

    for (int i = 0; i <n; i++)
    {
       for(int j=0;j<m;j++){
        if(a[i][j]==0){
            row[i]=1;
            col[j]=1;
        }
       }
    }

    for (int i = 0; i < n; i++)
    {
       for(int j=0;j<m;j++){
        if(row[i]==1 || col[j]==1){
            a[i][j]=0;
        }
       }
    }
    for (int i = 0; i < a.size(); i++)
    {
        for (int j = 0; j < a[i].size(); j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    
    

}