#include <iostream>
using namespace std;

void mysort(int arr[],int n){
    for(int j=n;j>1;j--)
    {
        for(int i=0;i<j-1;i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){

    int arr[] = {2,3,1,6,777,7,545,5};
    int size = sizeof(arr)/sizeof(int);
    mysort(arr,size);
    return 0;
}