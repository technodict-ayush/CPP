#include <iostream>
using namespace std;

int main(){
    int size;
    cout<<"enter size: "<<endl;
    cin>>size;

    int* arr = new int[size];

    for(int i=0;i<size;i++){
        cout<<"enter element: ";
        cin>>arr[i]; // we need not to deref array for value ,as we r using [] (overloaded)
        cout<<endl;
    }
    cout<<"array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    delete [] arr;
    return 0;
}