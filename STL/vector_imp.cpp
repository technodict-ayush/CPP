#include<iostream>
using namespace std;

class vector{
    int _size;
    int _capacity;
    int *p;

    public:
    vector(){
        _size = 0;
        _capacity = 2;
        p = new int[_capacity];
    }

    int size(){
        return _size;
    }
    int capacity(){
        return _capacity;
    }

    void push_back(int d){
        if(_size>=_capacity){
            _capacity = _capacity*2;
            int* p1 = new int[_capacity];
            for(int i=0;i<_size;i++){
                p1[i] = p[i];
            }
            delete[] p;
            p = p1;
        }
        p[_size] = d;
        _size++;
    }
    int operator[](int index)
    {
        return p[index];
    }
};
int main(){
    vector v1;
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.push_back(3);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;
    v1.push_back(4);
    cout<<v1.size()<<endl;
    cout<<v1.capacity()<<endl;

    cout<<v1[1]<<endl;

}