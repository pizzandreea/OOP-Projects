//
// Created by andreea on 4/30/2021.
//

#include <iostream>
#include "Comanda.h"


int Comanda::m_lastId = 1;

Comanda::Comanda():m_idComanda(0), m_nrHaine(0), m_durata(0), m_detergent(0){
}

Comanda::Comanda(const unsigned int &id, const unsigned int &nrHaine, const vector<Haina *> &haine): m_idComanda(id), m_nrHaine(nrHaine), m_detergent(0), m_durata(0){

    m_haine = haine;
}

Comanda::Comanda(const Comanda &o_comanda) {
    m_idComanda = o_comanda.m_idComanda;
    m_nrHaine = o_comanda.m_nrHaine;
    m_durata = o_comanda.m_durata;
    m_detergent = o_comanda.m_detergent;
    m_haine = o_comanda.m_haine;
}

Comanda::~Comanda() {
    m_haine.clear();
}

istream &operator>>(istream &in, Comanda &comanda) {

    unsigned int id, nrHaine;
    cout << "Introduceti:";
    cout << "\nComanda nr: " << comanda.m_lastId ;

    cout << "\nNumarul de articole: ";

    in >> comanda.m_nrHaine;

    cout << "\nArticole:";

    for(int i = 0; i < comanda.m_nrHaine; i++){
        Haina *haina = new Haina;

        cout << "\n Articol " << i+1 << ": ";

        in >> (*haina);

        comanda.m_haine.push_back(haina);
    }
    return in;

}

Comanda &Comanda::operator=(const Comanda &comanda) {
    m_nrHaine = comanda.m_nrHaine;
    m_haine = comanda.m_haine;
    m_idComanda = comanda.m_idComanda;
    m_detergent = comanda.m_detergent;
    m_durata = comanda.m_durata;
    return *this;
}
