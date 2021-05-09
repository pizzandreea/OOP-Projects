//
// Created by andreea on 5/7/2021.
//

#include <iostream>
#include "Sacou.h"

string Sacou::m_tip = "Sacou";

Sacou::Sacou(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Sacou::Sacou( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        : m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Sacou::Sacou(const Sacou &sacou) {
    m_greutate = sacou.m_greutate;
    m_culoare = sacou.m_culoare;
    m_tempMax = sacou.m_tempMax;
    m_tempMin = sacou.m_tempMin;
    m_greu = sacou.m_greu;

    m_nrOp = sacou.m_nrOp;
    m_opearatiuni = sacou.m_opearatiuni;
}

const string &Sacou::getTip() const {
    return m_tip;
}


unsigned int Sacou::getGreutate() const {
    return m_greutate;
}

int Sacou::getTempMin() const {
    return m_tempMin;
}

int Sacou::getTempMax() const {
    return m_tempMax;
}

bool Sacou::isCuloare() const {
    return m_culoare;
}


Sacou &Sacou::operator=(const Sacou &sacou){
    m_idComanda = sacou.m_idComanda;
    m_greutate = sacou.m_greutate;
    m_culoare = sacou.m_culoare;
    m_tempMax = sacou.m_tempMax;
    m_tempMin = sacou.m_tempMin;

    m_nrOp = sacou.m_nrOp;

    m_opearatiuni = sacou.m_opearatiuni;

    return *this;
}


istream &operator>>(istream &in, Sacou &sacou) {

    sacou.m_greu = false;

    cout << "\n Greutate: "; in >> sacou.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        sacou.m_culoare = true;
    }
    else{
        sacou.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> sacou.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> sacou.m_tempMax;

    return in;
}



