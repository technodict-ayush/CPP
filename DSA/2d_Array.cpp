#include<iostream>
using namespace std;
//most of the time arrays are stored in row major fashion

void printArray(int arr[][100],int n,int m){ //array pass by reference
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}


int main(){

    int arr[1000][100];
    int n,m;
    cout<<"enter rows and columns: "<<endl;
    cin>>n>>m;
    cout<<"enter elements: ";
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    printArray(arr,n,m);
    return 0;
}