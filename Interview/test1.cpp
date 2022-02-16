#include<iostream>
using namespace std;

//5! = 5x4x3x2x1

void fact(int n,int *o){

    if(n==1){
        *o = 1;
        return;
    }
    fact(n-1,o);
    *o = n*(*o);
}

int main(){
   int res;
   fact(3,&res);
   cout<<res<<endl;
}