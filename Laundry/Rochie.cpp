//
// Created by andreea on 5/6/2021.
//

#include <iostream>
#include "Rochie.h"


string Rochie::m_tip = "Rochie";

Rochie::Rochie(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Rochie::Rochie( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        : m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Rochie::Rochie(const Rochie &o_rochie) {
    m_greutate = o_rochie.m_greutate;
    m_culoare = o_rochie.m_culoare;
    m_tempMax = o_rochie.m_tempMax;
    m_tempMin = o_rochie.m_tempMin;
    m_greu = o_rochie.m_greu;

    m_nrOp = o_rochie.m_nrOp;
    m_opearatiuni = o_rochie.m_opearatiuni;
}

const string &Rochie::getTip() const {
    return m_tip;
}


istream &operator>>(istream &in, Rochie &rochie) {

    rochie.m_greu = false;

    cout << "\n Greutate: "; in >> rochie.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        rochie.m_culoare = true;
    }
    else{
        rochie.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> rochie.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> rochie.m_tempMax;

    return in;
}

unsigned int Rochie::getGreutate() const {
    return m_greutate;
}

