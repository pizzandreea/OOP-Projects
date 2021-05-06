//
// Created by andreea on 5/2/2021.
//

#include <iostream>
#include "Spalatorie.h"

Spalatorie* Spalatorie:: instance = nullptr;

Spalatorie::Spalatorie(): m_nume("Washescu"), m_nrMasiniSpalat(6), m_nrMasiniStors(6), m_nrMasiniUscat(6), m_nrMasiniCalcat(6), m_nrComenzi(0){

}

Spalatorie::Spalatorie(string nume, const unsigned int &nrMasiniSpalat, const unsigned int &nrMasiniStors, const unsigned int &nrMasiniUscat, const unsigned int &nrMasiniCalcat):
m_nume(nume), m_nrMasiniSpalat(nrMasiniSpalat), m_nrMasiniStors(nrMasiniStors), m_nrMasiniUscat(nrMasiniUscat), m_nrMasiniCalcat(nrMasiniCalcat), m_nrComenzi(0) {

}

unsigned int Spalatorie::getMNrMasiniSpalat() const {
    return m_nrMasiniSpalat;
}

void Spalatorie::setMNrMasiniSpalat(unsigned int mNrMasiniSpalat) {
    m_nrMasiniSpalat = mNrMasiniSpalat;
}

unsigned int Spalatorie::getMNrMasiniStors() const {
    return m_nrMasiniStors;
}

void Spalatorie::setMNrMasiniStors(unsigned int mNrMasiniStors) {
    m_nrMasiniStors = mNrMasiniStors;
}

const vector<MasinaSpalat *> &Spalatorie::getMasiniSpalat() const {
    return masiniSpalat;
}

void Spalatorie::setMasiniSpalat(const vector<MasinaSpalat *> &masiniSpalat) {
    Spalatorie::masiniSpalat = masiniSpalat;
}

const vector<MasinaStors *> &Spalatorie::getMasiniStors() const {
    return masiniStors;
}

void Spalatorie::setMasiniStors(const vector<MasinaStors *> &masiniStors) {
    Spalatorie::masiniStors = masiniStors;
}

const vector<Comanda *> &Spalatorie::getComenzi() const {
    return m_comenzi;
}

void Spalatorie::setComenzi(const vector<Comanda *> &comenzi) {
    Spalatorie::m_comenzi = comenzi;
}

const string &Spalatorie::getNume() const {
    return m_nume;
}

void Spalatorie::setNume(const string &nume) {
    m_nume = nume;
}

void Spalatorie::adaugaComanda() {

    m_nrComenzi ++;
    Comanda *p = nullptr;
    p = new Comanda();

    cin >> (*p);

    m_comenzi.push_back(p);
}

Spalatorie *Spalatorie::getInstance(){
    if(instance == nullptr) instance = new Spalatorie;
    return instance;
}

void Spalatorie::procesareComanda() {
//    procesam comanda abia adaugata, adica cea cu numarul m_nrComenzi
//    m_comenzi[m_nrComenzi]

//    parcurgem vectorul de haine din comanda
//
}
