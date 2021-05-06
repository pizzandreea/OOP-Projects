//
// Created by andreea on 4/30/2021.
//

#ifndef MAIN_HAINE_H
#define MAIN_HAINE_H

#include <string>
#include "Operatiune.h"
#include <vector>
//#include "Comanda.h"
class Comanda;

using namespace std;

class Haina {
public:

    Haina();

    Haina(string tip, const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu);

    Haina(const Haina &o_haina);

    ~Haina(){
        m_opearatiuni.clear();
    }

    const string &getTip() const;

    void setTip(const string &tip);

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

    void setMIdComanda(unsigned int idComanda);

    Haina& operator=(const Haina &o_haina);

    bool operator==(const Haina &o_haina) const;

    friend istream& operator>>(istream& in, Haina &haina);


private:

    string m_tip;
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


#endif //MAIN_HAINE_H
