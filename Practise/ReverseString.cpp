#include<iostream>
using namespace std;

void ReverseString(string s){

    int n = s.length()-1;
    int l = s.length()/2;
    char temp;
    for(int i=0;i<l;i++){
        temp = s[i];
        s[i] = s[n-i];
        s[n-i] = temp;
    }
    cout<<s<<endl;

}

int main(){

    ReverseString("Ayush");
    return 0;
}