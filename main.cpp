#include <iostream>
#include "polevka.h"
#include "jidlo.h"
#include "hlavnichod.h"
#include "objednavka.h"
using namespace std;

int main()
{
    Polevka p1 = Polevka("Kroupova", 30, 200, true);
    p1.info();

    HlavniChod h1 = HlavniChod("Rizek", 200, 400, true);
    h1.info();

    HlavniChod d1 = HlavniChod("Livance", 200, 400, false);

    Objednavka o1= Objednavka(2, p1, h1, d1);
    o1.Listek();
    cout <<"Zakaznik zaplati " << o1.Soucet() << endl;

    return 0;
}
