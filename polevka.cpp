#include "polevka.h"
#include <iostream>

using namespace std;

Polevka::Polevka(string nazevJidla, double jidloCena, double objem, bool jeHorka): Jidlo(standart, nazevJidla, "Polevka", jidloCena), objem(objem), jeHorka(jeHorka)
{

}

void Polevka::info()
{
    Jidlo::info();
    cout << "Polevka objem" << this->getObjem() <<"Polevka je tepla" << this->getJeHorka() << endl;
}


double Polevka::getObjem() const
{
    return objem;
}

void Polevka::setObjem(double value)
{
    objem = value;
}

bool Polevka::getJeHorka() const
{
    return jeHorka;
}

void Polevka::setJeHorka(bool value)
{
    jeHorka = value;
}
