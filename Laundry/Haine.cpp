//
// Created by andreea on 4/30/2021.
//

#include "Haine.h"

#include <utility>
#include <iostream>


Haina::Haina(): m_tip(""), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Haina::Haina(string tip , const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        :m_tip(tip), m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Haina::Haina(const Haina &o_haina) {
    m_tip = o_haina.m_tip;
    m_greutate = o_haina.m_greutate;
    m_culoare = o_haina.m_culoare;
    m_tempMax = o_haina.m_tempMax;
    m_tempMin = o_haina.m_tempMin;
    m_greu = o_haina.m_greu;

    m_nrOp = o_haina.m_nrOp;
    m_opearatiuni = o_haina.m_opearatiuni;
}

unsigned int Haina::getGreutate() const {
    return m_greutate;
}

int Haina::getTempMin() const {
    return m_tempMin;
}

int Haina::getTempMax() const {
    return m_tempMax;
}

bool Haina::isCuloare() const {
    return m_culoare;
}


unsigned int Haina::getNrOp() const {
    return m_nrOp;
}

void Haina::setGreutate(unsigned int greutate) {
    m_greutate = greutate;
}

void Haina::setTempMin(int tempMin) {
    m_tempMin = tempMin;
}

void Haina::setTempMax(int tempMax) {
    m_tempMax = tempMax;
}

void Haina::setCuloare(bool culoare) {
    m_culoare = culoare;
}


void Haina::setNrOp(unsigned int nrOp) {
    m_nrOp = nrOp;
}

unsigned int Haina::getIdComanda() const {
    return m_idComanda;
}

void Haina::setMIdComanda(unsigned int idComanda) {
    m_idComanda = idComanda;
}


Haina &Haina::operator=(const Haina &o_haina){
    m_tip = o_haina.m_tip;
    m_idComanda = o_haina.m_idComanda;
    m_greutate = o_haina.m_greutate;
    m_culoare = o_haina.m_culoare;
    m_tempMax = o_haina.m_tempMax;
    m_tempMin = o_haina.m_tempMin;

    m_nrOp = o_haina.m_nrOp;

    m_opearatiuni = o_haina.m_opearatiuni;

    return *this;
}

bool Haina::operator==(const Haina &o_haina) const{
    return m_tip == o_haina.m_tip &&
            m_greutate == o_haina.m_greutate &&
           m_tempMin == o_haina.m_tempMin &&
           m_tempMax == o_haina.m_tempMax &&
           m_culoare == o_haina.m_culoare;
}

istream &operator>>(istream &in, Haina &haina) {

    cout << "Tip: ";

    string tip;
    in >> tip;
    cout<<1;
    haina.m_tip = tip;


    if(haina.m_tip == "Pantaloni" || haina.m_tip == "Rochie" || haina.m_tip == "Camasa"){
        haina.m_greu = false;
    }
    else{
        haina.m_greu = true;
    }

    cout << "\n Greutate: "; in >> haina.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        haina.m_culoare = true;
    }
    else{
        haina.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> haina.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> haina.m_tempMax;

    return in;
}

const string &Haina::getTip() const {
    return m_tip;
}

void Haina::setTip(const string &tip) {
    Haina::m_tip = tip;
}


