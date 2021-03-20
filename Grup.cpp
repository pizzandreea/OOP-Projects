//
// Created by andreea on 3/16/2021.
//

#include "Grup.h"
#include "Cerere.h"


Grup::Grup():
    id(0), Nr_participanti(0){

}

Grup::Grup(const unsigned int &un_id, const unsigned int &un_nrparticipanti):
         id(un_id), Nr_participanti(un_nrparticipanti){

}

Grup::Grup(const Grup &un_grup){
    id = un_grup.id;
    Nr_participanti = un_grup.Nr_participanti;
}

unsigned int Grup::getID() const {
    return id;
}

unsigned int Grup::getNrParticipanti() const {
    return Nr_participanti;
}


void Grup::setNr_participanti(const unsigned int &un_nrparticipanti) {
    Nr_participanti = un_nrparticipanti;
}


void Grup::setID(const unsigned int &un_id) {
    id = un_id;
}




//operator afisare

ostream &operator<<(ostream &out, const Grup & un_grup){
    out<<"Grupul "<<un_grup.id<<", participanti "<<un_grup.Nr_participanti<<endl;

    return out;
}






