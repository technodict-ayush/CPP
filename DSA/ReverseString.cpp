#include<iostream>
using namespace std;

void reverseStr(string str){
    
    int n = str.length();
    if(n<1){
        return;
    }
    
    string str1 = str.substr (0,--n);
    cout<<str[n];
    reverseStr(str1);

}


int main(){

    string str = "Ayush";
    reverseStr(str);
    return 0;
}