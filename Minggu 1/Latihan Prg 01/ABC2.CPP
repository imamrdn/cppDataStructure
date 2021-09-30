#include<iostream.h>
using namespace std;

float Abc(float a, float b, float c)
{
   return a+b+b*c+(a+b-c)/(a+b)+4;
}

int main(void)
{
   cout << Abc(2,3,4) << endl;
}

