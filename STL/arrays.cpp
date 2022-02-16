#include<iostream>
#include<array>
#include<algorithm>
using namespace std;

int main(){

    array<int, 5> arr = {1,2,3,4,5};

    cout<<"test 1\n";
    cout<<arr.at(0)<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.front()<<endl;
    cout<<arr.back()<<endl;
    
    cout<<"test 2\n";
    for(auto a:arr){
        cout<<a<<endl;
    }

    cout<<"test 3\n";
    int *i = arr.begin(); //iterator
    while (i != arr.end())
    {
        cout<<*i<<endl;
        i++;
    }

    cout<<"test 4: reversing an array\n";
    int temp;
    int n = arr.size();

    for(int i=0;i<n/2;i++)
    {
        
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;

    }

    for(auto i:arr){
        cout<<i<<endl;
    }

    cout<<"test 5: sorting an array\n";
    sort(arr.begin(),arr.end());
    for(auto i:arr){
        cout<<i<<endl;
    }

    auto min = min_element(arr.begin(),arr.end());
    cout<<*min<<endl;

}    