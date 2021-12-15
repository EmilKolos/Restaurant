#ifndef HLAVNICHOD_H
#define HLAVNICHOD_H
#include "jidlo.h"
#include <string>
#include <iostream>

class HlavniChod : public Jidlo
{
public:
    HlavniChod(string nazevJidla, double jidloCena, double vaha, bool jeSPrilohou);

    virtual void info() override;
    double getVaha() const;
    void setVaha(double value);

    bool getJeSPrilohou() const;
    void setJeSPrilohou(bool value);

protected:
    double vaha;
    bool jeSPrilohou;
};

#endif // HLAVNICHOD_H
