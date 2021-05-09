//
// Created by andreea on 5/6/2021.
//

#ifndef MAIN_PALTON_H
#define MAIN_PALTON_H


#include "Haine.h"

class Palton: public Haina {

public:
    friend class Comanda;
    Palton();

    Palton( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu);

    Palton(const Palton &palton);

    ~Palton(){
        m_opearatiuni.clear();
    }

    const string &getTip() const;

    unsigned int getGreutate() const;

    friend istream& operator>>(istream& in, Palton& palton);

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

#endif //MAIN_PALTON_H
