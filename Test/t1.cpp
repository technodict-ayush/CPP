#include <stdio.h>
#include<iostream>
using namespace std;

int main(int ac, char **av) {
  int c;
  int i;
  int num_true = 0;
  FILE *fp = fopen(av[1], "r");
  while ((c = getc(fp)) != -1) {
    for (i=0; i<8; i++) {
      if (c & (1<<i)) {
        num_true++;
      }
    }
  }
  cout<<"The total number is:"<<num_true<<endl;
  return 0;
}