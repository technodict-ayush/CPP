#include<iostream>
using namespace std;

class point{

    int x,y;
    public:
    point(int x=0, int y=0):x{x},y{y}{}

    void display(){
        cout<<"x: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }

    point operator+(const point &rhs){
        point t;
        t.x = x + rhs.x;
        t.y = y + rhs.y;
        return t;
    }
    
};

int main(){

    point p1(2,3);
    point p2(3,2);

    point p3 = p1+p2;
    p3.display();

}