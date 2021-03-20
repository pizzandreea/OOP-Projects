//
// Created by andreea on 3/18/2021.
//

#include "Cerere.h"

int Cerere:: i = 1;

Cerere::Cerere():
    id(i++),  sedere(0){
        grup = new Grup[1001];

}
Cerere::Cerere(const int &o_sedere):
    id(i++),sedere(o_sedere){
        grup = new Grup[1001];
}

Cerere::Cerere(const Cerere &o_cerere){
    id = o_cerere.id;
    sedere = o_cerere.sedere;

//    Copiere vector dinamic de tip Grup nu stiu de ce nu merge
}

Cerere::~Cerere() {
    delete [] grup;
}

int Cerere::getID() const {
    return id;
}

int Cerere::getSedere() const {
    return sedere;
}

int Cerere::getId() const {
    return id;
}

Grup *Cerere::getGrup() const {
    return grup;
}

void Cerere::setSedere(int o_sedere) {
    sedere = o_sedere;
}

void Cerere::setId(int un_id) {
    id = un_id;
}

void Cerere::setGrup(Grup *un_grup) {
    grup = un_grup;
}

