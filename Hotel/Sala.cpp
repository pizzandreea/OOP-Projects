//
// Created by andreea on 3/16/2021.
//

#include "Sala.h"


Sala::Sala() :
    id(0),capacitate(0), addon(nullptr){
}

Sala::Sala(const unsigned int &un_id, const unsigned int &o_capacitate, const char* un_addon) :
    id(un_id), capacitate(o_capacitate){
    addon = new char[strlen(un_addon) + 1];

   strcpy(addon, un_addon);
}

Sala::Sala(const Sala &o_sala):
    Sala(o_sala.id, o_sala.capacitate, o_sala.addon){
}

Sala::~Sala() {
    delete[] addon;
}

unsigned int Sala::getId() const {
    return id;
}

unsigned int Sala::getCapacitate() const {
    return capacitate;
}

char *Sala::getAddon() const {
    return addon;
}

void Sala::setId(unsigned int id) {
    Sala::id = id;
}

void Sala::setCapacitate(int o_capacitate) {
    Sala::capacitate = o_capacitate;
}

void Sala::setAddon(char *un_addon) {
    Sala::addon = un_addon;
}

Sala& Sala::operator=(const Sala &o_sala) {
    id = o_sala.id;
    capacitate = o_sala.capacitate;

    strcpy(addon, o_sala.addon);
    return *this;
}



