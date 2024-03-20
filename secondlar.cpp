#include <iostream>
using namespace std;
int main()
{
    // int largest=0;
    // int secontLarge=-1;

    int arr[] = {1, 2, 3, 5, 6, 7, 7};

    // for(int i =0;i<6;i++){
    //     if(arr[i]>largest){
    //         largest=arr[i];
    //     }
    // }
    // for(int i =0;i<6;i++){
    //     if(arr[i]>secontLarge && arr[i]!=largest){
    //         secontLarge=arr[i];
    //     }

    // }
    // cout<<largest;
    // cout<<secontLarge;

    // for(int i=0;i<6;i++){
    //     if(arr[i]>largest){
    //         secontLarge=largest;
    //         largest=arr[i];
    //     }else if(arr[i]<largest && arr[i]>secontLarge){
    //         secontLarge=arr[i];
    //     }
    // }
    // cout<<largest<<endl;
    // cout<<secontLarge;
    int largest = arr[6];
    for (int i = 6; i > 0; i--)
    {
        if (arr[i] != largest)
        {
            cout << arr[i];
            break;
        }
    }

    return 0;
}