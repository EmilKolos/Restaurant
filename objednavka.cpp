#include "objednavka.h"

Objednavka::Objednavka(int stul, Jidlo predkrm, Jidlo hlavnichod, Jidlo dezert) :stul(stul), predkrm(predkrm), hlavnichod(hlavnichod), dezert(dezert)
{

}

void Objednavka::Listek()
{
    cout << "Objedenl pro stul " << this->stul << ": " << endl;
    cout << "Predkrm: " << endl;
    this->predkrm.info();
    cout << "Hlavni chod: " << endl;
    this->hlavnichod.info();
    cout << "Dezert: " << endl;
    this->dezert.info();
}


double Objednavka::Soucet()
{
    return this->predkrm.getFoodCena() + this->hlavnichod.getFoodCena() + this->dezert.getFoodCena();
}
