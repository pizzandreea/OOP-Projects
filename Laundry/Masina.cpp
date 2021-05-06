//
// Created by andreea on 4/30/2021.
//

#include "Masina.h"

Masina::Masina() : m_capacitate(10), m_nrHaine(0), m_id(0){
}

Masina::Masina(const unsigned int &Id, const unsigned int &nrHaine, const vector<Haina*> &haine) : m_id(Id), m_capacitate(10), m_nrHaine(nrHaine){
    m_haine = haine;
}

Masina::Masina(const Masina &o_masina) : m_capacitate(10) {
    m_id = o_masina.m_id;

    m_nrHaine = o_masina.m_nrHaine;

    m_haine = o_masina.m_haine;
}

unsigned int Masina::getId() const {
    return m_id;
}

void Masina::setId(unsigned int id) {
    m_id = id;
}

unsigned int Masina::getCapacitate() const {
    return m_capacitate;
}

unsigned int Masina::getNrHaine() const {
    return m_nrHaine;
}

void Masina::setNrHaine(unsigned int nrHaine) {
    m_nrHaine = nrHaine;
}

void Masina::setHaine(const vector<Haina *> &haine) {
    m_haine = haine;
}

Masina &Masina::operator=(const Masina &o_masina) {
    m_id = o_masina.m_id;
    m_nrHaine = o_masina.m_nrHaine;
    m_haine = o_masina.m_haine;
    return *this;
}

void Masina::adaugaHaina(const Haina &o_haina) {

    Haina *p = new Haina(o_haina);
    m_haine.push_back(p);
    m_nrHaine++;
}

//Haina *Masina::get(int i) {
//    return m_haine.at(i);
//}
//
//void Masina::update(int i, const Haina &o_haina) {
//    m_haine[i] = new Haina(o_haina);
//}
//
//void Masina::remove(const Haina &o_haina) {
//    for(int i = 0; i < m_nrHaine; i++){
//        if(*m_haine[i] == o_haina){
//            m_haine.erase(m_haine.begin()+i);
//        }
//    }
//}

