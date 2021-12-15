#ifndef OBJEDNAVKA_H
#define OBJEDNAVKA_H
#include "jidlo.h"

class Objednavka
{
public:
    Objednavka(int stul, Jidlo predkrm, Jidlo hlavnichod, Jidlo dezert);
    void Listek();
    double Soucet();

protected:
    int stul;
    Jidlo predkrm;
    Jidlo hlavnichod;
    Jidlo dezert;
};

#endif // OBJEDNAVKA_H
