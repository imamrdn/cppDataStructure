#include<iostream>
using namespace std;

template<class T>
T Abc(const T& a, const T& b,
         const T& c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main(void)
{
   cout << Abc(2,3,4) << endl;
   return 0;
}

