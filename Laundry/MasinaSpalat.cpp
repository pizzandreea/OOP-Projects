//
// Created by andreea on 5/1/2021.
//

#include "MasinaSpalat.h"

MasinaSpalat::MasinaSpalat(): m_id(0), m_kgHaine(0), m_capacitate(10), m_detergent(10), m_durata(30){
}

MasinaSpalat::MasinaSpalat(const unsigned int &id,  const unsigned int &nrHaine, const vector<Haina*> &haine):
   m_id(id), m_kgHaine(nrHaine), m_capacitate(10), m_durata(30), m_detergent(10) {
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

void MasinaSpalat::adaugaHaina(const Haina &o_haina) {

    if(m_kgHaine <= m_capacitate/2 && m_kgHaine + o_haina.getGreutate() <= m_capacitate){
        Haina *p = new Haina(o_haina);
        m_haine.push_back(p);
        m_kgHaine += o_haina.getGreutate();
    }
}

MasinaSpalat &MasinaSpalat::operator=(const MasinaSpalat &o_masina) {

    m_id = o_masina.m_id;
    m_haine = o_masina.m_haine;
    m_kgHaine = o_masina.m_kgHaine;

    return *this;
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


