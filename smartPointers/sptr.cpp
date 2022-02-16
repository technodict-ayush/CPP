#include<iostream>
using namespace std;

//smartptr<int> p(new int());

class smartptr
{
    int* ptr;

    public:
    smartptr(int* p = nullptr):ptr(p){}

    ~smartptr(){
        delete ptr;
    }

    int& operator*(){
        return *ptr;
    }

    int* operator->(){
        return ptr;
    }

};

int main(){
    smartptr p(new int(3));
    *p = 5;
    cout<<*p;
    return 0;
}