#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int i,j,k;
    ifstream mystream;
    mystream.open("input.txt");
    mystream>>i>>j>>k;
    cout<<i<<j<<k<<endl;
    mystream.close();

    ofstream myostream;
    myostream.open("output.txt");
    myostream<<"Ayush is great"<<endl<<"and good too";
    myostream.close();
    return 0;
}