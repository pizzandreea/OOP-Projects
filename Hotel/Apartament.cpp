//
// Created by andreea on 3/23/2021.
//

#include "Apartament.h"
#include "Participant.h"

Apartament::Apartament() :
        id(0), capacitate(0), nr_persoane(0){
    persoane_cazate = new Participant[1001];

    for(int i = 0; i <= 366; i++)
        data[i] = 0;
}

Apartament::Apartament(const unsigned int &un_id, const unsigned int &o_capacitate,
                       const unsigned int &un_nr_persoane) :id(un_id), capacitate(o_capacitate), nr_persoane(un_nr_persoane){
    persoane_cazate = new Participant[1001];

    for(int i = 0; i <= 366; i++)
        data[i] = 0;
}

Apartament::Apartament(const Apartament &un_apartament) {
    id = un_apartament.id;
    capacitate = un_apartament.capacitate;
    nr_persoane = un_apartament.nr_persoane;

    persoane_cazate = new Participant[1001];

    for(int i = 0; i < nr_persoane; ++i)
        persoane_cazate[i] = un_apartament.persoane_cazate[i];

    for(int i = 0; i <= 366; i++)
        data[i] = un_apartament.data[i];
}

Apartament::~Apartament() {
    delete[]persoane_cazate;

}

unsigned int Apartament::getId() const {
    return id;
}

unsigned int Apartament::getCapacitate() const {
    return capacitate;
}

Participant *Apartament::getPersoane_cazate() const {
    return persoane_cazate;
}


void Apartament::setId(int un_id) {
    id = un_id;
}

void Apartament::setCapacitate(int o_capacitate) {
    capacitate = o_capacitate;
}

void Apartament::setPersoaneCazate(Participant *n_persoane_cazate, unsigned int un_nr_persoane) {
    nr_persoane = un_nr_persoane;

    persoane_cazate = new Participant[1001];

    for(int i = 0; i < nr_persoane; i++)
        persoane_cazate[i] = n_persoane_cazate[i];
}

bool Apartament::operator>=(const Apartament &un_apartament) const {
    if(capacitate >= un_apartament.capacitate)
        return true;
    else return false;
}

Apartament &Apartament::operator=(const Apartament &un_apartament) {
    capacitate = un_apartament.capacitate;
    nr_persoane = un_apartament.nr_persoane;
    id = un_apartament.id;

    if(persoane_cazate != nullptr){
        delete[]persoane_cazate;
    }
    persoane_cazate = new Participant[nr_persoane + 1];

    for(int i = 0; i <  un_apartament.nr_persoane; i++)
        persoane_cazate[i] = un_apartament.persoane_cazate[i];

    for(int i = 0; i <= 366; i++)
        data[i] = un_apartament.data[i];

    return *this;
}

unsigned int Apartament::operator+(Apartament &un_apartament) {
    return capacitate + un_apartament.capacitate;
}

