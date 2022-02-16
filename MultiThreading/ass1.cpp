#include<iostream>
#include<thread>

using namespace std;

void test(){
    cout<<"hello from test\n";
}

void functionA(){
    cout<<"hello from function A\n";
    thread threadC(test);
    //threadC.join();
    threadC.detach();
}
void functionB(){
    cout<<"hello from function B\n";
}


int main(){
    thread threadA(functionA);
    threadA.join();
    thread threadB(functionB);
    threadB.join();

    return 0;
}
//g++ -std=c++14 -pthread ass1.cpp -o ass1.exe