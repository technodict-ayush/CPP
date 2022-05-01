#include<iostream>
#include<string.h>
using namespace std;

//product from which concrete class products will inherit from
class Coffee
{
protected:
    char _type[15];
public:
    Coffee(){

    }  
    char* getType(){
        return _type;
    }  
};

//one concrete class
class Espresso: public Coffee
{
public:
    Espresso() : Coffee()
    {
        strcpy(_type,"Espresso");
        cout<<"Making a cup of espresso"<<endl;

    }
};

class Cappuccino: public Coffee
{
public:
    Cappuccino() : Coffee()
    {
        strcpy(_type,"Cappuccino");
        cout<<"Making a cup of Cappuccino"<<endl;
    }
};

class CoffeeMakerFactory
{
public:
    Coffee* GetCoffee()
    {
        int choice;

        cout<< "select type of coffee to make: "<<endl;
        cout<< "1: Espresso"<<endl;
        cout<< "2: Cappuccino"<<endl;
        cout<<"selection: ";
        cin>> choice;

        switch(choice)
        {
        case 1:
            return new Espresso;
        case 2:
            return new Cappuccino;
        default:
            cout<<"Invalid selection"<<endl;
            return nullptr;
        }

    }
};

int main(){
    CoffeeMakerFactory CoffeeMachine;
    Coffee* cup;
    cup = CoffeeMachine.GetCoffee();

    cout<<"you have asked for: "<<cup->getType()<<endl;
}