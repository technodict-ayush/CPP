#include<iostream>
using namespace std;

void printNumberDec(int N){
    
    if(N == 1){
        cout<<1<<endl;
        return;
    }
    cout<<N<<endl;
    printNumberDec(N-1);
}
void printNumberInc(int N){

    if(N == 1){
        cout<<1<<endl;
        return;
    }
    
    printNumberInc(N-1);
    cout<<N<<endl;

}

int main(){
    printNumberDec(8);
    printNumberInc(8);
    return 0;
}