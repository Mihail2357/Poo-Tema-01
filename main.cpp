#include <iostream>
#include "Nod.h"
#include "set.h"
#include<cassert>

using namespace std;

int main()
{ Set l(9),s(22),o;
    l.insert(3);
     l.insert(4);
     l.insert(11);
     s.insert(4);
     s.insert(25);
     l.insertAt(55,3);
    l.print();
    l*2;
    l.print();
    s.print();
    (s+l).print();
   assert(s[2]==25);
   assert(s<l);

   o=s;
   o.print();

}
