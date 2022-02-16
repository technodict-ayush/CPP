#include<iostream>
#include<math.h>
using namespace std;

class Point{
    friend class PointFactory;
    Point(float x, float y):x(x),y(y){}
    
    public:
    float x,y;
    
};

class PointFactory{

    public:
    static Point NewCartesian(float x, float y){
        return {x,y}; //intializing point object with x,y with constructor of point class
    }
    static Point NewPolar(float r, float theta){
        return {r*cos(theta),r*sin(theta)};
    }

};

int main(){

    auto p1 = PointFactory::NewPolar(5,3.14);
    cout<<p1.x<<endl;
    cout<<p1.y<<endl;

    auto p2 = PointFactory::NewCartesian(5,3.14);
    cout<<p2.x<<endl;
    cout<<p2.y<<endl;
    
}