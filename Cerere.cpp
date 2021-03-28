//
// Created by andreea on 3/18/2021.
//

#include "Cerere.h"

int Cerere:: i = 1;

Cerere::Cerere():
    id(i++),  sedere(0), tip(0){

}
Cerere::Cerere(const unsigned int &un_id, Grup un_grup, const unsigned int &o_sedere, bool un_tip) :
        id(i++), sedere(o_sedere),tip(un_tip){
        grup = un_grup;

}

Cerere::Cerere(const Cerere &o_cerere):
    Cerere(o_cerere.id, o_cerere.grup, o_cerere.sedere,o_cerere.tip){



}

Cerere::~Cerere() {

}


int Cerere::getSedere() const {
    return sedere;
}

int Cerere::getId() const {
    return id;
}


void Cerere::setSedere(int o_sedere) {
    sedere = o_sedere;
}

void Cerere::setId(int un_id) {
    id = un_id;
}

void Cerere::setGrup(Grup un_grup) {
    grup = un_grup;
}

const Grup &Cerere::getGrup() const {
    return grup;
}

Cerere &Cerere::operator=(const Cerere &o_cerere) {

    tip = o_cerere.tip;
    grup = o_cerere.grup;
    id = o_cerere.id;
    sedere = o_cerere.sedere;

    return *this;
}






