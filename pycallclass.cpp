//g++ -o libpycallclass.so -shared -fPIC pycallclass.cpp
#include <iostream>
using namespace std;

class TestLib
{
    public:
        int foo(int a,int b);
};
int TestLib::foo(int a,int b) {
    return a + b;
}

extern "C" {
    TestLib obj;
    int foo(int a,int b) {
        obj.foo(a,b);
      }
}