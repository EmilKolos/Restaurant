#ifndef JIDLO_H
#define JIDLO_H
#include <string>
#include <iostream>
using namespace std;

enum druhJidla {standart, vegetarianske, veganske};
class Jidlo
{
public:

    Jidlo(druhJidla jidlo, string typJidla, string nazevJidla, double jidloCena);
    druhJidla getJidlo() const;
    void setJidlo(const druhJidla &value);

    string getTypJidla() const;
    void setTypJidla(const string &value);

    string getNazevJidla() const;
    void setNazevJidla(const string &value);

    double getFoodCena() const;
    void setFoodCena(double value);
    virtual void info();
    friend std::ostream& operator<<(std::ostream& str, Jidlo &jidlo);
protected:

    druhJidla jidlo;
    string typJidla;
    string nazevJidla;
    double jidloCena;
};

#endif // JIDLO_H
