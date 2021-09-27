#include<iostream.h>
using namespace std;

template<class T>
T Abc(T& a, T& b, T& c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main(void)
{
   int a = 2, b = 3, c = 4;
   cout << Abc(a,b,c) << endl;
}

