//Hunter Vaccaro
//hpv8hf
//09/26/2019
//bitCounter.cpp
#include <tgmath.h>
#include <iostream>
using namespace std;

int bitcount(int a) { //counts the number of 1 bits
  if(a==0){
    return 0;
  }
  else if(a%2==0){
    return bitcount(a/2);
  }
  else{
    return 1+bitcount(floor(a/2));
  }
}
int main (int argc, char **argv) { //converts strings to numbers and displays the number of 1 bits
  int x = 0;
  int y = 0;
  for(int i = 1; i<argc;i++){
    x = stoi(argv[i]);
    y = bitcount(x);
    cout << x << " = " << y<< endl;
  }
}
