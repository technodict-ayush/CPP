#include<iostream>
using namespace std;

int main(){
    int *arr = new int[10];
    arr[0] = 44; // => *(arr + 0)

    cout<<arr[0]<<endl;
    cout<<*arr<<endl;

    delete [] arr;
    return 0;
}