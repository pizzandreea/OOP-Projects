//
// Created by andreea on 5/2/2021.
//

#ifndef MAIN_SPALATORIE_H
#define MAIN_SPALATORIE_H

#include <vector>
#include <string>
#include "Comanda.h"
using namespace std;

class Masina;
class MasinaSpalat;
class MasinaStors;
class MasinaUscat;
class MasinaCalcat;



class Spalatorie {

public:

    Spalatorie();

    Spalatorie(string nume, const unsigned int &nrMasiniSpalat, const unsigned int &nrMasiniStors, const unsigned int &nrMasiniUscat, const unsigned int &nrMasiniCalcat);

    ~Spalatorie(){
        masiniSpalat.clear();
        masiniStors.clear();
        m_comenzi.clear();
    }

    static Spalatorie* getInstance();

    unsigned int getMNrMasiniSpalat() const;

    void setMNrMasiniSpalat(unsigned int mNrMasiniSpalat);

    unsigned int getMNrMasiniStors() const;

    void setMNrMasiniStors(unsigned int mNrMasiniStors);

    const vector<MasinaSpalat *> &getMasiniSpalat() const;

    void setMasiniSpalat(const vector<MasinaSpalat *> &masiniSpalat);

    const vector<MasinaStors *> &getMasiniStors() const;

    void setMasiniStors(const vector<MasinaStors *> &masiniStors);

    const vector<Comanda *> &getComenzi() const;

    void setComenzi(const vector<Comanda *> &comenzi);

    const string &getNume() const;

    void setNume(const string &nume);

    void adaugaComanda();

//    void setMasini();

    void procesareComanda();

private:


    static Spalatorie* instance;

    unsigned int m_nrMasiniSpalat;
    unsigned int m_nrMasiniStors;
    unsigned int m_nrMasiniUscat;
    unsigned int m_nrMasiniCalcat;

    vector <MasinaSpalat*> masiniSpalat;
    vector <MasinaStors*> masiniStors;
    vector <MasinaUscat*> masiniUscat;
    vector <MasinaCalcat*> masiniCalcat;

    unsigned int m_nrComenzi;
    vector <Comanda*> m_comenzi;

    string m_nume;

};


#endif //MAIN_SPALATORIE_H
