#include<iostream>
#include "Vector.h"
using namespace std;

int main(){
    Vector<int> v;

    v.push_back(2);
    v.push_back(8);
    v.push_back(7);

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
}