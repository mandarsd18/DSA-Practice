#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> arr{
        {1,2},
        {1,3},
        {4,5,5}
    };
    for(int i=0;i<arr.size();i++){
        for (int j = 0; j < arr[i].size(); j++)
        {
          cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}