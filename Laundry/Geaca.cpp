//
// Created by andreea on 5/6/2021.
//

#include <iostream>
#include "Geaca.h"


string Geaca::m_tip = "Geaca";

Geaca::Geaca(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Geaca::Geaca( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        : m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Geaca::Geaca(const Geaca &o_geaca) {
    m_greutate = o_geaca.m_greutate;
    m_culoare = o_geaca.m_culoare;
    m_tempMax = o_geaca.m_tempMax;
    m_tempMin = o_geaca.m_tempMin;
    m_greu = o_geaca.m_greu;

    m_nrOp = o_geaca.m_nrOp;
    m_opearatiuni = o_geaca.m_opearatiuni;
}

const string &Geaca::getTip() const {
    return m_tip;
}


istream &operator>>(istream &in, Geaca &geaca) {

    geaca.m_greu = true;

    cout << "\n Greutate: "; in >> geaca.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        geaca.m_culoare = true;
    }
    else{
        geaca.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> geaca.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> geaca.m_tempMax;

    return in;
}

unsigned int Geaca::getGreutate() const {
    return m_greutate;
}

