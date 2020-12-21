#include "pair.h"
namespace sel{
Pair::Pair(int a,int b){
    pa = new int;
    pb = new int;
    *pa = a;
    *pb = b;
 }
Pair::Pair(const Pair & obj){
   pa = new int;
   pb = new int;
   *pa = *(obj.pa);
   *pb = *(obj.pb);
   
 }
 Pair& Pair::operator=(const Pair & obj){
   *pa = *(obj.pa);
   *pb = *(obj.pb);
   return *this;
 }
 Pair::~Pair(){
   delete pa;
   delete pb;
 }
}