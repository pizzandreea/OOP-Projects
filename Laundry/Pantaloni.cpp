//
// Created by andreea on 5/6/2021.
//

#include <iostream>
#include "Pantaloni.h"


string Pantaloni::m_tip = "Pantaloni";

Pantaloni::Pantaloni(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(false){
}

Pantaloni::Pantaloni(const unsigned int& idComanda, const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        :m_idComanda(idComanda), m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Pantaloni::Pantaloni(const Pantaloni &pantaloni) {
    m_greutate = pantaloni.m_greutate;
    m_culoare = pantaloni.m_culoare;
    m_tempMax = pantaloni.m_tempMax;
    m_tempMin = pantaloni.m_tempMin;
    m_greu = pantaloni.m_greu;

    m_nrOp = pantaloni.m_nrOp;
    m_opearatiuni = pantaloni.m_opearatiuni;
}

const string &Pantaloni::getTip() const {
    return m_tip;
}


Pantaloni &Pantaloni::operator=(const Pantaloni &pantaloni){
    m_idComanda = pantaloni.m_idComanda;
    m_greutate = pantaloni.m_greutate;
    m_culoare = pantaloni.m_culoare;
    m_tempMax = pantaloni.m_tempMax;
    m_tempMin = pantaloni.m_tempMin;

    m_nrOp = pantaloni.m_nrOp;

    m_opearatiuni = pantaloni.m_opearatiuni;

    return *this;
}


istream &operator>>(istream &in, Pantaloni &pantaloni) {

    pantaloni.m_greu = false;

    cout << "\n Greutate: "; in >> pantaloni.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        pantaloni.m_culoare = true;
    }
    else{
        pantaloni.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> pantaloni.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> pantaloni.m_tempMax;

    return in;
}

unsigned int Pantaloni::getGreutate() const {
    return m_greutate;
}

