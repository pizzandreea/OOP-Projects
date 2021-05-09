//
// Created by andreea on 5/6/2021.
//

#include <iostream>
#include "Camasa.h"

string Camasa::m_tip = "Camasa";

Camasa::Camasa(): m_idComanda(0), m_greutate(0), m_tempMax(0), m_tempMin(0), m_culoare(false), m_nrOp(0), m_greu(0){
}

Camasa::Camasa(const unsigned int& idComanda, const unsigned int &greutate, const int &tempMin, const  int &tempMax, const bool &culoare, const bool &greu)
        :m_idComanda(idComanda), m_greutate(greutate), m_tempMin(tempMin), m_tempMax(tempMax), m_culoare(culoare), m_nrOp(0), m_greu(greu){
}


Camasa::Camasa(const Camasa &o_camasa) {
    m_greutate = o_camasa.m_greutate;
    m_culoare = o_camasa.m_culoare;
    m_tempMax = o_camasa.m_tempMax;
    m_tempMin = o_camasa.m_tempMin;
    m_greu = o_camasa.m_greu;

    m_nrOp = o_camasa.m_nrOp;
    m_opearatiuni = o_camasa.m_opearatiuni;
}

const string &Camasa::getTip() const {
    return m_tip;
}

unsigned int Camasa::getGreutate() const {
    return m_greutate;
}

int Camasa::getTempMin() const {
    return m_tempMin;
}

int Camasa::getTempMax() const {
    return m_tempMax;
}

bool Camasa::isCuloare() const {
    return m_culoare;
}


unsigned int Camasa::getNrOp() const {
    return m_nrOp;
}

void Camasa::setGreutate(unsigned int greutate) {
    m_greutate = greutate;
}

void Camasa::setTempMin(int tempMin) {
    m_tempMin = tempMin;
}

void Camasa::setTempMax(int tempMax) {
    m_tempMax = tempMax;
}

void Camasa::setCuloare(bool culoare) {
    m_culoare = culoare;
}


void Camasa::setNrOp(unsigned int nrOp) {
    m_nrOp = nrOp;
}

unsigned int Camasa::getIdComanda() const {
    return m_idComanda;
}

void Camasa::setIdComanda(unsigned int idComanda) {
    m_idComanda = idComanda;
}


Camasa &Camasa::operator=(const Camasa &o_camasa){
    m_idComanda = o_camasa.m_idComanda;
    m_greutate = o_camasa.m_greutate;
    m_culoare = o_camasa.m_culoare;
    m_tempMax = o_camasa.m_tempMax;
    m_tempMin = o_camasa.m_tempMin;

    m_nrOp = o_camasa.m_nrOp;

    m_opearatiuni = o_camasa.m_opearatiuni;

    return *this;
}

bool Camasa::operator==(const Camasa &o_camasa) const{
    return
           m_greutate == o_camasa.m_greutate &&
           m_tempMin == o_camasa.m_tempMin &&
           m_tempMax == o_camasa.m_tempMax &&
           m_culoare == o_camasa.m_culoare;
}

istream &operator>>(istream &in, Camasa &camasa) {

    camasa.m_greu = false;

    cout << "\n Greutate: "; in >> camasa.m_greutate;

    cout << "\n Culoare: ";
    string culoare;
    in >> culoare;

    if(culoare == "inchisa"){
        camasa.m_culoare = true;
    }
    else{
        camasa.m_culoare = false;
    }

    cout << "\nTemperatura minima: ";
    in >> camasa.m_tempMin;

    cout << "\nTemperatura maxima: ";
    in >> camasa.m_tempMax;

    return in;
}


