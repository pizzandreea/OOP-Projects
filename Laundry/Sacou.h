//
// Created by andreea on 5/7/2021.
//

#ifndef MAIN_SACOU_H
#define MAIN_SACOU_H

#include "Haine.h"

class Sacou: public Haina{

public:
    friend class Comanda;
    Sacou();

    Sacou( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu);

    Sacou(const Sacou &o_camasa);

    ~Sacou(){
        m_opearatiuni.clear();
    }

    const string &getTip() const;

    unsigned int getGreutate() const;

    int getTempMin() const ;

    int getTempMax() const ;

    bool isCuloare() const;

    Sacou& operator=(const Sacou &sacou);

    friend istream& operator>>(istream& in, Sacou &sacou);

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


#endif //MAIN_SACOU_H
