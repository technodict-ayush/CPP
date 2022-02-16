#include<iostream>
using namespace std;

unsigned int reverseBit(unsigned int n){
    unsigned int res = 0;
    unsigned int temp = n;

    for(int i=0;i<31;i++){
        res |= (temp&1);
        temp = temp>>1;
        res = res<<1;
    }
    res |= (temp&1);
    return res;
}

int main()
{
    unsigned int i = 1;
    cout<<reverseBit(i);
    return 0;
}