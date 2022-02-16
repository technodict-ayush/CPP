#include<iostream>
using namespace std;

class Singleton{

    int a;
    Singleton(){
        a=1;
    }

    public:
    static Singleton& getObj(){

        static Singleton obj;
        return obj;
    }
    int getMember(){

        return a;
    }
    void setMember(int n){

        a=n;
    }

};
int main(){

    Singleton &p = Singleton::getObj();
    cout<<p.getMember()<<endl;
    
    Singleton &p1 = Singleton::getObj();
    p1.setMember(3);
    cout<<p.getMember()<<endl;
    cout<<p1.getMember()<<endl;
}