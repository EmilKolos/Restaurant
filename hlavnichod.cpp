#include "hlavnichod.h"

HlavniChod::HlavniChod(string nazevJidla, double jidloCena, double vaha, bool jeSPrilohou): Jidlo(standart, nazevJidla, "Hlavni Jidlo", jidloCena), vaha(vaha), jeSPrilohou(jeSPrilohou)
{

}

void HlavniChod::info()
{
    Jidlo::info();
    cout << "Vaha: " << this->getVaha() <<"Je sprilohou" << this->getJeSPrilohou() << endl;
}

double HlavniChod::getVaha() const
{
    return vaha;
}

void HlavniChod::setVaha(double value)
{
    vaha = value;
}

bool HlavniChod::getJeSPrilohou() const
{
    return jeSPrilohou;
}

void HlavniChod::setJeSPrilohou(bool value)
{
    jeSPrilohou = value;
}
