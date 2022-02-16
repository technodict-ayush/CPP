#include<iostream>
using namespace std;

int f;
int fibonacciWithRecursion(int n)
{

    if(n==1||n==0){
        return n;
    }
    f = fibonacciWithRecursion(n-2)+fibonacciWithRecursion(n-1);
    return f;
}
int fibonacciWithoutRecursion(int n)
{
    int arr[n];
    arr[0]=0;
    arr[1]=1;
    for(int i=2;i<=n;i++){
        arr[i] = arr[i-1]+arr[i-2];
    }
    f = arr[n];
    return f;
}

int main(){
    cout<<fibonacciWithRecursion(6)<<endl;
    cout<<fibonacciWithoutRecursion(6)<<endl;
}