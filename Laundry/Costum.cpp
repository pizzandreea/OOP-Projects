//
// Created by andreea on 5/6/2021.
//

#include "Costum.h"
string Costum::m_tip = "Costum";

Costum::Costum(): m_pantaloni(), m_sacou(), m_idComanda(0){
}

Costum::Costum(const unsigned int& idComanda, const Pantaloni& pantaloni, const Sacou& sacou):m_pantaloni(pantaloni), m_sacou(sacou){
}

Costum::Costum(const Costum &costum) {

    m_pantaloni = costum.m_pantaloni;
    m_sacou = costum.m_sacou;
    m_idComanda = costum.m_idComanda;
}

const string &Costum::getTip() const {
    return m_tip;
}

unsigned int Costum::getGreutate() const {
    return m_pantaloni.getGreutate() + m_sacou.getGreutate();
}
