//
// Created by andreea on 5/1/2021.
//

#include "MasinaStors.h"

MasinaStors::MasinaStors(): m_id(0), m_kgHaine(0), m_capacitate(10), m_durata(10){
}

MasinaStors::MasinaStors(const unsigned int &id,  const unsigned int &kgHaine, const vector<Haina*> &haine):
        m_id(id), m_kgHaine(kgHaine), m_capacitate(10), m_durata(10) {
    m_haine = haine;
}


MasinaStors::MasinaStors(const MasinaStors &o_masina):m_capacitate(10), m_durata(10) {
    m_id = o_masina.m_id;
    m_kgHaine = o_masina.m_kgHaine;
    m_haine = o_masina.m_haine;

}


unsigned int MasinaStors::getId() const {
    return m_id;
}

int MasinaStors::getDurata() const {
    return m_durata;
}

unsigned int MasinaStors::getCapacitate() const {
    return m_capacitate;
}


unsigned int MasinaStors::getNrHaine() const {
    return m_kgHaine;
}

void MasinaStors::setId(unsigned int id) {
    m_id = id;
}


void MasinaStors::setNrHaine(unsigned int kgHaine) {
    m_kgHaine = kgHaine;
}

void MasinaStors::setHaine(const vector<Haina *> &haine) {
    m_haine = haine;
}

void MasinaStors::adaugaHaina(const Haina &o_haina) {

    if(m_kgHaine <= m_capacitate/2 && m_kgHaine + o_haina.getGreutate() <= m_capacitate){
        Haina *p = new Haina(o_haina);
        m_haine.push_back(p);
        m_kgHaine += o_haina.getGreutate();
    }
}

MasinaStors &MasinaStors::operator=(const MasinaStors &o_masina) {

    m_kgHaine = o_masina.m_kgHaine;
    m_id = o_masina.m_id;
    m_haine = o_masina.m_haine;

    return *this;
}


//Haina *MasinaStors::get(int i) {
//    return Masina::get(i);
//}
//
//void MasinaStors::update(int i, const Haina &o_haina) {
//    return Masina::update(i, o_haina);
//}
//
//void MasinaStors::remove(const Haina &o_haina) {
//    return Masina::remove(o_haina);
//}
