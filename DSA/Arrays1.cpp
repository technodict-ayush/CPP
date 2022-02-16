#include<iostream>
using namespace std;
//n need to be passed as arr is just a pointer variable having 8 bytes
//so, int n = sizeof(arr)/sizeof(int); will give wrong results inside function.

void printArray(int arr[], int n) //passed by reference
{
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    printArray(arr,n);
    return 0;
}