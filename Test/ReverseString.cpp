#include <iostream>
#include <vector>
#include <string>


using namespace std;

string reverse(string t){
  int n = t.length()-1;
  char temp;
  for(int i = 0; i< n ; i++){

      temp = t[i];
      t[i] = t[n];
      t[n] = temp;
      n--;

  }
  return t;

}

int main() {
  
  string s = "abcd";
  string rev = reverse(s);
  cout<<rev<<endl;
  return 0;
}