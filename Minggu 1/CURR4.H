
#ifndef Currency_
#define Currency_

#include <iostream>
#include <stdlib.h>
#include "xcept.h"
using namespace std;

enum sign {plust, minust};

class Currency {
   public:
      // constructor
      Currency(sign s = plust, unsigned long d = 0,
                              unsigned int c = 0);
      // destructor
      ~Currency() {}
      void Set(sign s, unsigned long d,
                       unsigned int c);
      void Set(float a);
      sign Sign() const
        {if (amount < 0) return minust;
        else return plust;}
      unsigned long Dollars() const
        {if (amount < 0) return (-amount) / 100;
        else return amount / 100;}
      unsigned int Cents() const
        {if (amount < 0) return -amount - Dollars() * 100;
        else return amount - Dollars() * 100;}
      Currency operator+(const Currency& x) const;
      Currency& operator+=(const Currency& x)
        {amount += x.amount; return *this;}
      void Output(ostream& out) const;
   private:
      long amount;
};

Currency::Currency(sign s, unsigned long d,
                           unsigned int c)
{// Create a Currency object.
   if (c > 99) throw BadInitializers();

   amount = d * 100 + c;
   if (s == minust) amount = -amount;
}

void Currency::Set(sign s, unsigned long d,
                           unsigned int c)
{// Reset value.
   if (c > 99) throw BadInitializers();

   amount = d * 100 + c;
   if (s == minust) amount = -amount;
}
   
void Currency::Set(float a)
{// Reset value.
   sign sgn;
   if (a < 0) {sgn = minust; a = -a;}
   else sgn = plust;
   amount = (a + 0.001) * 100;
   if (sgn == minust) amount = -amount;
}

Currency Currency::operator+(const Currency& x) const
{// Add x and *this.
   Currency y;
   y.amount = amount + x.amount;
   return y;
}

void Currency::Output(ostream& out) const
{// Insert currency value into stream out.
   long a = amount;
   if (a < 0) {out << '-';
               a = -a;}
   long d = a / 100;
   out << '$' << d << '.';
   int c = a - d * 100;
   if (c < 10) out << "0";
   out << c;
}

// overload <<
ostream& operator<<(ostream& out, const Currency& x)
   {x.Output(out); return out;}

#endif
