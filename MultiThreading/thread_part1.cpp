#include<iostream>
#include<list>
#include<thread>
using namespace std;

int size = 50000000;
list<int> l;

void download(){
    for(int i=0;i<size;i++){
        l.push_back(i);
    }
    cout<<"downloading ended"<<endl;
}
//g++ -std=c++14 -pthread thread_part1.cpp -o th1.exe
int main(){

    cout<<"downloading started"<<endl;
    thread t1(download);

    cout<<"another process started"<<endl;
    cout<<"another process ended"<<endl;
    
    if(t1.joinable()){
       t1.join();
    }


    return 0;
}