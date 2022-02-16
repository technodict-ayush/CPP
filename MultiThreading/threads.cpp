#include<iostream>
#include<thread>
#include<chrono>
#include<algorithm>
using namespace std;
using namespace std::chrono;

typedef unsigned long long ull;


ull oddsum = 0;
ull evensum = 0;

void addeven(ull start,ull end)
{
    for(ull i=start;i<=end;++i)
    {
        if (i%2==0)
        {
            evensum = evensum + i;
        }
        
    }
}
void addodd(ull start,ull end)
{
    for(ull i=start;i<=end;++i)
    {
        if (i%2!=0)
        {
            oddsum = oddsum + i;
        }
        
    }
}

int main()
{

    ull start=0,end=1900000000;
    
    //auto starttime = high_resolution_clock::now();

    //addeven(start,end);
    std::thread t1(addeven,start,end);
    //addodd(start,end);
    std::thread t2(addodd,start,end);
    
    t1.join(); //to make main thread to wait until t1 finish
    t2.join(); //to make main thread to wait until t2 finish

    auto stoptime = high_resolution_clock::now();
    //auto duration = duration_cast<microseconds>(stoptime-starttime);

    cout<<oddsum<<endl;
    cout<<evensum<<endl;
    //cout<<duration.count()/1000000<<endl;

}