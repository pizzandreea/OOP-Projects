//
// Created by andreea on 5/6/2021.
//

#ifndef MAIN_CAMASA_H
#define MAIN_CAMASA_H


#include "Haine.h"

using namespace std;

class Camasa: public Haina {

public:
    friend class Comanda;
    Camasa();

    Camasa(const unsigned int &idComanda, const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu);

    Camasa(const Camasa &o_camasa);

    ~Camasa(){
        m_opearatiuni.clear();
    }

    const string &getTip() const;

    unsigned int getGreutate() const;

    int getTempMin() const ;

    int getTempMax() const ;

    bool isCuloare() const;

    unsigned int getNrOp() const;

    void setGreutate(unsigned int greutate);

    void setTempMin(int tempMin);

    void setTempMax(int tempMax);

    void setCuloare(bool culoare);

    void setNrOp(unsigned int nrOp);

    unsigned int getIdComanda() const;

    void setIdComanda(unsigned int idComanda);

    Camasa& operator=(const Camasa &o_camasa);

    bool operator==(const Camasa &o_camasa) const;

    friend istream& operator>>(istream& in, Camasa &camasa);


private:
    static string m_tip;
    unsigned int m_idComanda;
    unsigned int m_greutate;
    int m_tempMin;
    int m_tempMax;
    bool m_culoare;         // 0 -deschis 1- inchis

    bool m_greu;              // 0- usor 1- greu

//    in urma spalarii haina isi va aminti
    vector <Operatiune*> m_opearatiuni;
    unsigned int m_nrOp;
};

#endif //MAIN_CAMASA_H
