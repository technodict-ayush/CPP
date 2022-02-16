#include <iostream>
using namespace std;


class HackClass1{
    public:
    HackClass1(){
        cerr << "Error1\n";
    }
    ~HackClass1(){
        cerr << "Error2\n";
    }
};

class HackClass2{
    private:
    int var1
    {};
    HackClass1 var2;

    public:
    HackClass2(int var3): var1{var3}{
        if(var3 <= 0){
            throw 1;
        }
    }
    ~HackClass2(){
        cerr << "Error3\n";
    }
};

int main(){

    try
    {
        HackClass2 a{0};
    }
    catch(int)
    {
        cerr << "Error4\n";
    }
    
    return 0;
}