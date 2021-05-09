//
// Created by andreea on 5/6/2021.
//

#ifndef MAIN_COSTUM_H
#define MAIN_COSTUM_H


#include "Haine.h"
#include "Pantaloni.h"
#include "Sacou.h"


class Costum: public Haina {



public:
    friend class Comanda;

    Costum();

    Costum(const unsigned int& idComanda, const Pantaloni& pantaloni, const Sacou& sacou);

    Costum(const Costum &costum);


    const string &getTip() const;
    unsigned int getGreutate() const;


private:

    static string m_tip;
    unsigned int m_idComanda;
    Pantaloni m_pantaloni;
    Sacou m_sacou;


//    unsigned int m_greutate;
//    int m_tempMin;
//    int m_tempMax;
//    bool m_culoare;         // 0 -deschis 1- inchis
//
//    bool m_greu;              // 0- usor 1- greu
//
////    in urma spalarii haina isi va amintii

};

#endif //MAIN_COSTUM_H
