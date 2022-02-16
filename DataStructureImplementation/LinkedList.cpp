#include<iostream>
#include "list.h"
using namespace std;

int main(){

    List l;
    l.push_front(1);
    l.push_back(2);
    l.push_front(0);
    l.insert(11,2);
    l.insert(19,0);
    l.print();
    cout<<"-------------------"<<endl;
    cout<<l.search(2)<<endl;
    cout<<l.recSearch(2)<<endl;
    return 0;
}