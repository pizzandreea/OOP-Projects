//
// Created by andreea on 5/2/2021.
//

#include "MasinaUscat.h"


MasinaUscat::MasinaUscat(): m_id(0), m_nrHaine(0), m_capacitate(35), m_durata(20){
}

MasinaUscat::MasinaUscat(const unsigned int &id,  const unsigned int &nrHaine, const vector<Haina*> &haine):
        m_id(id), m_nrHaine(nrHaine), m_capacitate(35), m_durata(20) {
    m_haine = haine;
}

MasinaUscat::MasinaUscat(const MasinaUscat &o_masina):m_durata(20), m_capacitate(35) {
    m_haine = o_masina.m_haine;
    m_nrHaine = o_masina.m_nrHaine;
    m_id = o_masina.m_id;
}

unsigned int MasinaUscat::getId() const {
    return m_id;
}

int MasinaUscat::getDurata() const {
    return m_durata;
}

unsigned int MasinaUscat::getCapacitate() const {
    return m_capacitate;
}


unsigned int MasinaUscat::getNrHaine() const {
    return m_nrHaine;
}

void MasinaUscat::setId(unsigned int id) {
    m_id = id;
}


void MasinaUscat::setNrHaine(unsigned int nrHaine) {
    m_nrHaine = nrHaine;
}

void MasinaUscat::setHaine(const vector<Haina *> &haine) {
    m_haine = haine;
}

void MasinaUscat::adaugaHaina(const Haina &o_haina) {

    if(m_nrHaine <= m_capacitate/2 && m_nrHaine + o_haina.getGreutate() <= m_capacitate){
        Haina *p = new Haina(o_haina);
        m_haine.push_back(p);
        m_nrHaine += o_haina.getGreutate();
    }
}

MasinaUscat &MasinaUscat::operator=(const MasinaUscat &o_masina) {
    m_id = o_masina.m_id;
    m_nrHaine = o_masina.m_nrHaine;
    m_haine = o_masina.m_haine;

    return *this;
}


