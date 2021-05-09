//
// Created by andreea on 5/6/2021.
//

#include <iostream>
#include "Palton.h"


string Palton::m_tip = "Palton";

Palton::Palton(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Palton::Palton( const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        : m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Palton::Palton(const Palton &palton) {
    m_greutate = palton.m_greutate;
    m_culoare = palton.m_culoare;
    m_tempMax = palton.m_tempMax;
    m_tempMin = palton.m_tempMin;
    m_greu = palton.m_greu;

    m_nrOp = palton.m_nrOp;
    m_opearatiuni = palton.m_opearatiuni;
}

const string &Palton::getTip() const {
    return m_tip;
}


istream &operator>>(istream &in, Palton &palton) {

    palton.m_greu = true;

    cout << "\n Greutate: "; in >> palton.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        palton.m_culoare = true;
    }
    else{
        palton.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> palton.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> palton.m_tempMax;

    return in;
}

unsigned int Palton::getGreutate() const {
    return m_greutate;
}

