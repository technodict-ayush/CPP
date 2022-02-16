#include<iostream>
using namespace std;


//why we need virtual distructor
//when we use base pointer to refer child object,and then delete the pointer
//the base distructor will be invoked and child distructor would be totally ignored
//to call child distructor we need virtual distructor

class Account{
    public:
    virtual void withdraw() const{
        cout<<"account withdraw"<<endl;
    }

    virtual ~Account(){
        cout<<"Account distructor called";
    }
    
};
class saving:public Account{
    
    public:
    virtual void withdraw() const override{
        cout<<"saving withdraw"<<endl;
    }

    virtual ~saving(){
        cout<<"saving distructor called";
        cout<<endl;
    }

};
class current:public Account{
    
    public:
    virtual void withdraw() const override{
        cout<<"current withdraw"<<endl;
    }

    virtual ~current(){
        cout<<"current distructor called";
        cout<<endl;
    }

};
void withdraw_account(Account &acc){

    acc.withdraw();
}

int main(){

    Account *s = new saving();
    s->withdraw();
    Account *c = new current();
    c->withdraw();

    saving s1;
    current c1;

    withdraw_account(s1);
    withdraw_account(c1);

    //delete s,c;
}