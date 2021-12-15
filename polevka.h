#ifndef POLEVKA_H
#define POLEVKA_H
#include "jidlo.h"
#include <string>
#include <iostream>

using namespace std;

class Polevka : public Jidlo
{
public:
    Polevka(string nazevJidla, double jidloCena, double objem, bool jeHorka );
    virtual void info() override;

    double getObjem() const;
    void setObjem(double value);

    bool getJeHorka() const;
    void setJeHorka(bool value);

protected:
    double objem;
    bool jeHorka;

};

#endif // POLEVKA_H
