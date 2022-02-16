#include<iostream>
using namespace std;

int CheckOccurenceWithoutRecursion(int arr[],int n,int k){
    
    for(int pos = 0;pos<n;pos++){
        if(arr[pos]==k){
            return pos;
        }
    }

    //CheckOccurence(arr+1,n,k);
    return -1;
}

int CheckOccurenceWithRecursion(int arr[],int n,int k){

    if(n==0){
        return -1;
    }
     
    if(arr[0]==k){
        return 0;
    }

    CheckOccurenceWithRecursion(arr,n-1,k);
}  

int main(){

    int arr[] = {2,4,66,5,77,5,8};
    int n = sizeof(arr)/sizeof(int);
    int k = 5;
    cout<<CheckOccurenceWithoutRecursion(arr,n,k)<<endl;
    cout<<CheckOccurenceWithRecursion(arr,n,k)<<endl;
    return 0;
}