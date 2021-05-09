//
// Created by andreea on 5/1/2021.
//

#include <iostream>
#include "MasinaSpalat.h"
#include "Camasa.h"
#include "Rochie.h"


MasinaSpalat::MasinaSpalat(): m_id(0), m_kgHaine(0), m_capacitate(10), m_detergent(10), m_durata(30){
}

MasinaSpalat::MasinaSpalat(const unsigned int &id,  const unsigned int &kgHaine, const vector<Haina*> &haine):
   m_id(id), m_kgHaine(kgHaine), m_capacitate(10), m_durata(30), m_detergent(10) {
    m_haine = haine;
}

MasinaSpalat::MasinaSpalat(const MasinaSpalat &masina) : m_capacitate(10), m_detergent(10), m_durata(30) {
    m_haine = masina.m_haine;
    m_id = masina.m_id;
    m_kgHaine = masina.m_kgHaine;
}

unsigned int MasinaSpalat::getId() const {
    return m_id;
}

unsigned int MasinaSpalat::getCapacitate() const {
    return m_capacitate;
}

int MasinaSpalat::getDurata() const {
    return m_durata;
}

int MasinaSpalat::getMDetergent() const {
    return m_detergent;
}

unsigned int MasinaSpalat::getNrHaine() const {
    return m_kgHaine;
}

void MasinaSpalat::setId(unsigned int id) {
    m_id = id;
}


void MasinaSpalat::setNrHaine(unsigned int nrHaine) {
    m_kgHaine = nrHaine;
}

void MasinaSpalat::setHaine(const vector<Haina *> &haine) {
    m_haine = haine;
}

MasinaSpalat &MasinaSpalat::operator=(const MasinaSpalat &o_masina) {

    m_id = o_masina.m_id;
    m_haine = o_masina.m_haine;
    m_kgHaine = o_masina.m_kgHaine;

    return *this;
}

bool MasinaSpalat::incapeHaina(Haina *o_haina) {
    if(m_kgHaine <= m_capacitate/2 && m_kgHaine + o_haina->getGreutate() <= m_capacitate)
        return true;
    return false;

}


void MasinaSpalat::adaugaHaina(Haina *o_haina, bool &adaugat) {

    adaugat = 0;
    Camasa *camasa = dynamic_cast<Camasa*>(o_haina);
    Costum *costum = dynamic_cast<Costum*>(o_haina);
    Geaca *geaca = dynamic_cast<Geaca*>(o_haina);
    Palton *palton = dynamic_cast<Palton*>(o_haina);
    Pantaloni *pantaloni = dynamic_cast<Pantaloni*>(o_haina);
    Rochie *rochie = dynamic_cast<Rochie*>(o_haina);

//        costumele separat
    if(costum){
        if(m_haine.empty() || dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Costum(*costum));
        }

    }

    if(geaca){
        if (m_haine.empty() || !dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Geaca(*geaca));
        }
    }
    if(camasa){
        if (m_haine.empty() || !dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Camasa(*camasa));
        }
    }
    if(palton){
        if (m_haine.empty() || !dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Palton(*palton));
        }
    }
    if(rochie){
        if (m_haine.empty() || !dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Rochie(*rochie));
        }
    }
    if(pantaloni){
        if (m_haine.empty() || !dynamic_cast<Costum*>(m_haine[m_haine.size()-1]) ){
            adaugat = 1;
            m_haine.push_back(new Pantaloni(*pantaloni));
        }
    }

}



void MasinaSpalat::spala() {

    if (m_kgHaine > m_capacitate/2){
//    putem porni masina

//        calculam detergentul folosit pt fiecare haina
//        memoram timpul pentrecut in masina la spalare pt fiecare haina

        for(int i = 0; i < m_haine.size(); i++){

            m_haine[i]->m_nrOp ++;

            Operatiune *op = new Operatiune("Spalare", m_durata);

            m_haine[i]->m_opearatiuni.push_back(op);
        }
//        la final pregatim hainele de uscat
//        si golim masina de spalat
    }



}



//Haina *MasinaSpalat::get(int i) {
//    return Masina::get(i);
//}
//
//void MasinaSpalat::update(int i, const Haina &o_haina) {
//    return Masina::update(i, o_haina);
//}
//
//void MasinaSpalat::remove(const Haina &o_haina) {
//    return Masina::remove(o_haina);
//}


