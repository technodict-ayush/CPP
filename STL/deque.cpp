#include<iostream>
#include<deque>
#include<algorithm>
using namespace std;

//deque or doubly ended queue,
//insertion or removal can be done from any end
//dynamic and implemented using fixed static arrays
//random access is possible

int main()
{

    deque<int> d;
    cout<<"---------push back and push front--------------------------\n";
    d.push_back(1);
    d.push_front(2);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"---------pop back and pop front--------------------------\n";
    d.pop_front();
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<"---------get first index element--------------------------\n";
    d.push_front(44);
    d.push_front(99);
    for(int i:d)
    {
        cout<<i<<endl;
    }
    cout<<d.at(1);
    cout<<"---------check if deque is empty--------------------------\n";
    cout<<d.empty()<<endl;
    d.clear();
    cout<<d.empty()<<endl;
}