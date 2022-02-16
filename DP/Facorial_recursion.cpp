#include<iostream>
using namespace std;
int f;
int factorial(int n)
{
    //base case : where we know the answer of sub-problem
    if(n==1){
        return 1;
    }
    f = n*factorial(n-1);
    return f;
}

int main(){
    cout<<factorial(5)<<endl;
}