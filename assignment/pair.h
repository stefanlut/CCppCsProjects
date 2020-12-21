#pragma once
namespace sel{
    class Pair{
        public:
        int *pa, *pb;
        Pair(int a,int b){}
        Pair(const Pair & obj){}
        Pair();
        Pair & operator=(const Pair & obj);
        ~Pair(){}

    };
}