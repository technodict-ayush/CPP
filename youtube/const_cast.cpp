#include<iostream>
using namespace std;


int main(){
    int a = 7;
    const int* p = &a;

    cout<<a<<endl;
    cout<<*p<<endl;

    int* p1 = const_cast<int*>(p);
    *p1 = 4;

    cout<<a<<endl;
    cout<<*p<<endl;
    return 0;
}