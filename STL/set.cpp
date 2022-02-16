#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
//do not contains duplicate
//you cannot modify elements, only add and delete
//returns elements in sorted order

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    s.insert(1);

    for(auto i:s)
    {
        cout<<i<<endl;
    }
    //to check if given element exist
    cout<<"counting given value in set"<<endl;
    cout<<s.count(5)<<endl;
    //if element exist , to get the iterator of given element
    
    set<int>::iterator itr = s.find(3);
    cout<<"dereferencing find"<<endl;
    cout<<*itr<<endl;
    cout<<"iterating over set after dereference"<<endl;
    for(auto i=itr;i!=s.end();i++)
    {
        cout<<*i<<endl;
    }

}