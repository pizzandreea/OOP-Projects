//
// Created by andreea on 5/2/2021.
//

#include <iostream>
#include "Spalatorie.h"

Spalatorie* Spalatorie:: instance = nullptr;

Spalatorie::Spalatorie(): m_nume("Washescu"), m_nrMasiniSpalat(5), m_nrMasiniStors(5), m_nrMasiniUscat(5), m_nrMasiniCalcat(5), m_nrComenzi(0){


    for(int i = 0; i < 5; i++){
        vector <Haina*> haine;
        MasinaSpalat *masina = new MasinaSpalat(i+1, 0, haine);
        masiniSpalat.push_back(masina);

    }

}

Spalatorie::Spalatorie(string nume, const unsigned int &nrMasiniSpalat, const unsigned int &nrMasiniStors, const unsigned int &nrMasiniUscat, const unsigned int &nrMasiniCalcat):
m_nume(nume), m_nrMasiniSpalat(nrMasiniSpalat), m_nrMasiniStors(nrMasiniStors), m_nrMasiniUscat(nrMasiniUscat), m_nrMasiniCalcat(nrMasiniCalcat), m_nrComenzi(0) {

    for(int i = 0; i < 5; i++){
        vector <Haina*> haine;
        MasinaSpalat *masina = new MasinaSpalat(i+1, 0, haine);
        masiniSpalat.push_back(masina);
    }
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

void Spalatorie::setMasini() {
//    for(int i = )
}

void Spalatorie::adaugaComanda() {

    m_nrComenzi ++;
    Comanda *p = nullptr;
    p = new Comanda();

    cin >> (*p);

    m_comenzi.push_back(p);
}

Spalatorie *Spalatorie::getInstance(){
    if(instance == nullptr) instance = new Spalatorie("Washescu", 5, 5, 5, 5);
    return instance;
}


void Spalatorie::procesareComanda() {
//    procesam comanda abia adaugata, adica cea cu numarul m_nrComenzi
//    m_comenzi[m_nrComenzi]

//    parcurgem vectorul de haine din comanda

    Comanda *comanda = new Comanda(getComanda(m_nrComenzi-1));

    for(int i = 0; i < comanda->m_nrHaine; i++){
        queueSpalat.push_back(comanda->m_haine[i]);
//        cout << "pus ";

////        mai intai spalam
////        incercam pe rand toate masinile de spalat pana gasim una in care incape
//
//        bool  pusLaSpalat = 0;
//
//        for(int j = 0; j < m_nrMasiniSpalat; j++){
//
//            Haina *haina = new Haina(*comanda->m_haine[i]);
//            if(masiniSpalat[j]->incapeHaina(haina)){
//
//                masiniSpalat[j]->adaugaHaina(haina, pusLaSpalat );
//                if(pusLaSpalat == 1)
//                    break;
//            }
//        }
//
////        daca nu am gasit o masina in care are loc
//        if(pusLaSpalat == 0){
//            queueSpalat.push_back(comanda->m_haine[i]);
//        }

    }

}

Comanda Spalatorie::getComanda(const int &i) {
    return *m_comenzi[i];
}

void Spalatorie::spalare() {
//    din vectorul queueSpalat
//    adaugam hainele in masini


//    while(!queueSpalat.empty()){
        for(int i = 0; i < queueSpalat.size(); i++){

            bool  pusLaSpalat = 0;

//            verificam in ce masina de spalat incape haina
            for(int j = 0; j < m_nrMasiniSpalat; j++){

                Haina *o_haina = new Haina(*queueSpalat[i]);
                if(masiniSpalat[j]->incapeHaina(o_haina)){

                    masiniSpalat[j]->adaugaHaina(o_haina, pusLaSpalat );
                    if(pusLaSpalat == 1)
                        break;
                }
            }

//            daca am gasit o masina in care are loc
            if(pusLaSpalat == 1){
//            o scoatem din coada de spalat
                queueSpalat.erase(queueSpalat.begin() + i);
            }
        }

//        dupa ce am parcurs o data coada de spalat
//        pornim masinile care pot fi pornite
        for(auto masina: masiniSpalat){
            masina->spala();
        }

//    }

}

