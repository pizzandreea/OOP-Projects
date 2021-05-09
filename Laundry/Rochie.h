//
// Created by andreea on 5/6/2021.
//

#ifndef MAIN_ROCHIE_H
#define MAIN_ROCHIE_H


#include "Haine.h"

using namespace std;

class Rochie: public Haina {

public:
    friend class Comanda;
    Rochie();

    Rochie( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu);

    Rochie(const Rochie &o_rochie);

    ~Rochie(){
        m_opearatiuni.clear();
    }

    const string &getTip() const;

    unsigned int getGreutate() const;

    friend istream& operator>>(istream& in, Rochie &rochie);


private:
    static string m_tip;
    unsigned int m_idComanda;
    unsigned int m_greutate;
    int m_tempMin;
    int m_tempMax;
    bool m_culoare;         // 0 -deschis 1- inchis

    bool m_greu;              // 0- usor 1- greu

//    in urma spalarii haina isi va amintii
    vector <Operatiune*> m_opearatiuni;
    unsigned int m_nrOp;
};
#endif //MAIN_ROCHIE_H
