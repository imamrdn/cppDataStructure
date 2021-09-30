<<<<<<< HEAD
#include <iostream>
#include "CURR1.H"

int main()
{
   Currency g, h(plust, 3, 50), i, j;
   g.Set(minust, 2, 25);
   i.Set(-6.45);
   j = h.Add(g);
   j.Output(); cout << endl;
   i.Increment(h);
   i.Output(); cout << endl;
   j = i.Add(g).Add(h);
   j.Output(); cout << endl;
   j = i.Increment(g).Add(h);
   j.Output(); cout << endl;
   i.Output(); cout << endl;
   return 0;
}
=======
// test currency class

#include <iostream>
#include "curr1.h"

int main(void)
{
   Currency g, h(plust, 3, 50), i, j;
   g.Set(minust, 2, 25);
   i.Set(-6.45);
   j = h.Add(g);
   j.Output(); cout << endl;
   i.Increment(h);
   i.Output(); cout << endl;
   j = i.Add(g).Add(h);
   j.Output(); cout << endl;
   j = i.Increment(g).Add(h);
   j.Output(); cout << endl;
   i.Output(); cout << endl;
}
>>>>>>> cd3738cb7017d9f23b96c8ade88fc93f642ed642
