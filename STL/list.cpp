//implemented using doubly linked list.
//direct access is not possible by index or at
#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

int main()
{
    list<int> l;
    l.push_back(33);
    l.push_front(22);

    for(int i:l){
        cout<<i<<" "<<endl;
    }
    cout<<"---------delete a element by iterator--------------------------\n";
    l.erase(++l.begin());
    for(int i:l){
        cout<<i<<" "<<endl;
    }
    cout<<"---------size of list--------------------------\n";
    cout<<l.size()<<endl;
    cout<<"---------copy of list--------------------------\n";
    list<int> l_cpy(l);
    for(int i:l_cpy){
        cout<<i<<endl;
    }
    cout<<"---------giving size--------------------------\n";
    list<int> l2(4,100);
    for(int i:l2){
        cout<<i<<endl;
    }

}

