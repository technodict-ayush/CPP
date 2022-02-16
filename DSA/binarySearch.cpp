#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;

    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid]>key){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[] = {3,5,7,8,9,54,65,76};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter the key to be searched: "<<endl;
    cin>>key;

    int index = binarySearch(arr,n,key);
    cout<<"element found at index: "<<index<<endl;
    return 0;
}