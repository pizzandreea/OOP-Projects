//
// Created by andreea on 3/16/2021.
//

#include "Grup.h"
#include "Cerere.h"
#include "Participant.h"


Grup::Grup():
        id(0), nr_participanti(0),addon(nullptr){

}

Grup::Grup(const unsigned int &un_id, const unsigned int &un_nrparticipanti, const char* un_addon):
        id(un_id), nr_participanti(un_nrparticipanti){
    addon = new char [strlen(un_addon) + 1];

    strcpy(addon,un_addon);

}

Grup::Grup(const Grup &un_grup):
    Grup(un_grup.id, un_grup.nr_participanti, un_grup.addon){
}

unsigned int Grup::getId() const {
    return id;
}

unsigned int Grup::getNrParticipanti() const {
    return nr_participanti;
}


void Grup::set_participanti(const unsigned int &un_nrparticipanti, Participant n_participanti[1001]) {
    nr_participanti = un_nrparticipanti;

    for(int i = 0; i < nr_participanti; i++)
        participanti[i] = n_participanti[i];
}


void Grup::setID(const unsigned int &un_id) {
    id = un_id;
}

char *Grup::getAddon() const {
    return addon;
}

void Grup::setAddon(char *un_addon) {
    addon = new char[strlen(un_addon) + 1];

    strcpy(addon,un_addon);
}


//operator afisare

ostream &operator<<(ostream &out, const Grup & un_grup){
    out << "Grupul " << un_grup.id << ", participanti " << un_grup.nr_participanti << endl;

    return out;
}

bool Grup::operator>=(const Grup &un_grup) {
    if(nr_participanti >= un_grup.nr_participanti)
        return true;
    else return false;
}

Grup &Grup::operator=(const Grup &un_grup) {
    id = un_grup.id;
    nr_participanti = un_grup.nr_participanti;

    for(int i = 0; i < nr_participanti; ++i)
        participanti[i] = un_grup.participanti[i];
    return *this;
}







