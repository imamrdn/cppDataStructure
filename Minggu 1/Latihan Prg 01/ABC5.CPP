<<<<<<< HEAD
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

=======
#include<iostream.h>
using namespace std;

template<class T>
T Abc(const T& a, const T& b,
         const T& c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

void main(void)
{
   cout << Abc(2,3,4) << endl;
}

>>>>>>> cd3738cb7017d9f23b96c8ade88fc93f642ed642
