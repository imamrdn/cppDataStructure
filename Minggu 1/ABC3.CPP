#include<iostream>
using namespace std;

template<class T>
T Abc(T a, T b, T c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main(void)
{
   cout << Abc(2,3,4) << endl;
   return 0;
}

