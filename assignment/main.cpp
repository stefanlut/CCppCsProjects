#include "pair.h"
#include <iostream>
using namespace std;
using namespace sel;

int main() {
  Pair p(15,16);
  Pair q(p);
  Pair *hp = new Pair(23,42);
  p = *hp;
  delete hp;
  
    cout << "If this message is printed,"
    << " at least the program hasn't crashed yet!\n"
    << "But you may want to print other diagnostic messages too." <<endl;
  return 0;
}