#include<iostream>
#include<mutex>
#include<list>
#include<thread>
using namespace std;

list<int> l;
mutex m;

void addList(int const &a){
    lock_guard<mutex> lg(m);
    l.push_front(a);
}

void printList(){
    for(int i : l){
        cout<<i<<endl;
    }
}
//g++ -std=c++14 -pthread mutex.cpp -o m.exe
int main(){
    thread t1(addList,2);
    thread t2(addList,4);

    t1.join();
    t2.join();

    printList();

    return 0;
}