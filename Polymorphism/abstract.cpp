#include<iostream>
using namespace std;

//abstract class have atleast one pure virtual function
//abstract class cannot be instanciated
//child must implement pure virtual methods.
//interface have all virtual function.
class Account{
    public:
    virtual void deposit() = 0;
    virtual void withdraw() = 0;

};
class saving : public Account{
    public:
    void deposit() override{
        cout<<"deposited to the saving account\n";
    }
    void withdraw() override{
        cout<<"withdraw from the saving account\n";
    }

};

int main(){

    Account* acc = new saving();
    acc->deposit();
}