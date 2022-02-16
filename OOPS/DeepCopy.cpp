#include<iostream>
using namespace std;

class Deep{
    int* p;
    int a;
public:    
    Deep(){
        p = new int(2);
        a = 7;
    }
    Deep(const Deep &o){
        this->a = o.a;
        //this->p = o.p; //shallow copy
        this->p = new int(*(o.p)); //deep copy
    }
    void operator=(const Deep &o){
        this->a = o.a;
        this->p = new int(*(o.p));
    }
    void show(){
        cout<<"a is "<<a<<endl;
        cout<<"p is "<<*p<<endl;
    }
    void setp(int n){
        *p = n;
    }
};

int main(){
    Deep obj1;
    //Deep obj2(obj1);
    Deep obj2;
    obj1 = obj2;


    obj2.setp(5);

    obj1.show();
    obj2.show();



    return 0;
}