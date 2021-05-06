//
// Created by andreea on 5/2/2021.
//

#include "MasinaCalcat.h"


MasinaCalcat::MasinaCalcat(): m_id(0), m_nrHaine(0), m_capacitate(1){
}

MasinaCalcat::MasinaCalcat(const unsigned int &id,  const unsigned int &nrHaine, const vector<Haina*> &haine):
        m_id(id), m_nrHaine(nrHaine), m_capacitate(1)  {
    m_haine = haine;
}

MasinaCalcat::MasinaCalcat(const MasinaCalcat &masina):m_capacitate(1) {
    m_haine = masina.m_haine;
    m_id = masina.m_id;
    m_nrHaine = masina.m_nrHaine;
}

unsigned int MasinaCalcat::getId() const {
    return m_id;
}

unsigned int MasinaCalcat::getCapacitate() const {
    return m_capacitate;
}

unsigned int MasinaCalcat::getNrHaine() const {
    return m_nrHaine;
}

void MasinaCalcat::setId(unsigned int id) {
    m_id = id;
}


void MasinaCalcat::setNrHaine(unsigned int nrHaine) {
    m_nrHaine = nrHaine;
}

void MasinaCalcat::setHaine(const vector<Haina *> &haine) {
    m_haine = haine;
}

void MasinaCalcat::adaugaHaina(const Haina &o_haina) {
    if(m_nrHaine == 0){
        Haina *p = new Haina(o_haina);
        m_haine.push_back(p);
        m_nrHaine++;
    }
}

MasinaCalcat &MasinaCalcat::operator=(const MasinaCalcat &o_masina) {

    m_haine = o_masina.m_haine;
    m_nrHaine = o_masina.m_nrHaine;
    m_id = o_masina.m_id;

    return *this;
}




