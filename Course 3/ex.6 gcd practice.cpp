#include <iostream>
#include <conio.h>
using namespace std;

int gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main() {
   int a, b;
   cout << "Masukkan nilai a : ";  cin >> a;
   cout << "Masukkan nilai b : ";  cin >> b;
   cout << "\nGCD dari " << a << " dan " << b << " adalah = " << gcd(a, b);

    getch();
    return 0;
}
