#include <iostream>
using namespace std;

template<class Ta, class Tb, class Tc>
Ta Abc(const Ta& a, const Tb& b, const Tc& c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main(void)
{
   cout << Abc(2,3,4) << endl;
}

