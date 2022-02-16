#include<iostream>
using namespace std;

class abc{
    int a;

public:
    int* p;
    abc(){
        a = 1;
        p = new int(9);
    }
    //  abc(const abc& o){
    //      a = o.a;
    //      p = new int(*(o.p));
    //  }
    int* getp(){
        return p;
    }
    
    

};

int main(){
    abc obj1;
    abc obj2 = obj1;
    
    delete obj1.p;

    cout<<*(obj1.p)<<" "<<*(obj2.p)<<endl;

    return 0;
}