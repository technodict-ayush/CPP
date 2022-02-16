#include<iostream>
using namespace std;

class Shallow
{
    int* data;
    public:
    Shallow(int d) //constructor
    {
        data = new int();
        *data = d;
    }
    Shallow(const Shallow &source) //copy constructor
    {
        //deep copy
        data = new int(source.data);
        //*data = *(source.data);
        
        //shallow copy
        //data = source.data;
    }
    void setdata(int d){
        *data = d;
    }
    int getdata()
    {
        return *data;
    }
    ~Shallow(){
        delete data;
    }
};

void display(Shallow s) //copy constructor called
{
    cout<<s.getdata()<<endl;
}

int main()
{
    Shallow obj1(100);
    Shallow obj2(obj1);
    obj2.setdata(33);
    display(obj1);
    display(obj2);
    return 0;
}