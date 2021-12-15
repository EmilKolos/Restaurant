#include "jidlo.h"
using namespace std;
#include <iostream>

Jidlo::Jidlo(druhJidla jidlo, string typJidla, string nazevJidla, double jidloCena):jidlo(standart),typJidla("neuvedeno"),nazevJidla("neuvedeno"), jidloCena(0)
{
    this->jidlo = jidlo;
    this->typJidla = typJidla;
    this->nazevJidla = nazevJidla;
    this->jidloCena = jidloCena;
}

druhJidla Jidlo::getJidlo() const
{
    return jidlo;
}

void Jidlo::setJidlo(const druhJidla &value)
{
    jidlo = value;
}

string Jidlo::getTypJidla() const
{
    return typJidla;
}

void Jidlo::setTypJidla(const string &value)
{
    typJidla = value;
}

string Jidlo::getNazevJidla() const
{
    return nazevJidla;
}

void Jidlo::setNazevJidla(const string &value)
{
    nazevJidla = value;
}

double Jidlo::getFoodCena() const
{
    return jidloCena;
}

void Jidlo::setFoodCena(double value)
{
    jidloCena = value;
}

void Jidlo::info()
{
    cout << "Druh jidla: " << this->getTypJidla() << "Nazev jidla: " << this->getNazevJidla() << "Cena: " << this->getFoodCena() << endl;
}
ostream& operator<<(std::ostream& str, Jidlo &jidlo)
{
    str << jidlo.getTypJidla() << "," << jidlo.getNazevJidla() << "," << jidlo.getFoodCena();
    return str;
}
