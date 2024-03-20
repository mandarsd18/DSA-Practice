#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2,2, 3, 4};
    
    int i=0;
    for(int j=1;j<5;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    cout<<i+1<<endl;
    return 0;
}