//
// Created by andreea on 4/30/2021.
//

#include "Operatiune.h"

Operatiune::Operatiune(): m_nume(nullptr), m_durata(0){

}

Operatiune::Operatiune(string nume, const unsigned int &durata): m_nume(nume), m_durata(durata) {

}

Operatiune::Operatiune(const Operatiune &op) {
    m_nume = op.m_nume;
    m_durata = op.m_durata;

}
