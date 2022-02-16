#include<iostream>
using namespace std;

int linearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++)
    {
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
}


int main(){

    int arr[] = {2,44,6,44,7,22,3,97,44};
    int n = sizeof(arr)/sizeof(int);
    int key;
    cout<<"enter the element to be searched"<<endl;
    cin>>key;
    
    int index = linearSearch(arr,n,key);
    cout<<"key found at index: "<<index<<endl;

    return 0;
}