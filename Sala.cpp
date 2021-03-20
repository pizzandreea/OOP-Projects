//
// Created by andreea on 3/16/2021.
//

#include "Sala.h"


Sala::Sala() :
    id(0),capacitate(0){
    addon = new char[50];
    addon[0]='\0';

}

Sala::Sala(const unsigned int &un_id, const unsigned int &o_capacitate, const char* un_addon) :
    id(un_id), capacitate(o_capacitate){
    addon = new char[50];

    for(int i = 0; i < strlen(un_addon); ++i)
    {
        addon[i] = un_addon[i];
    }
    addon[strlen(un_addon)] = '\0';

}

Sala::Sala(const Sala &o_sala){
    id = o_sala.id;
    capacitate = o_sala.capacitate;

    addon = new char[50];

    for(int i = 0; i < strlen(o_sala.addon); ++i)
    {
        addon[i] = o_sala.addon[i];
    }
    addon[strlen(o_sala.addon)] = '\0';
}

Sala::~Sala() {
    delete[] addon;
}

unsigned int Sala::getId() const {
    return id;
}

int Sala::getCapacitate() const {
    return capacitate;
}

char *Sala::getAddon() const {
    return addon;
}

void Sala::setId(unsigned int id) {
    Sala::id = id;
}

void Sala::setCapacitate(int capacitate) {
    Sala::capacitate = capacitate;
}

void Sala::setAddon(char *addon) {
    Sala::addon = addon;
}
