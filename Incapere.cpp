//
// Created by andreea on 3/16/2021.
//


#include "Incapere.h"
#include <cstring>


int Incapere::i = 1;

Incapere::Incapere() :
        Capacitate(0), ID(i++){
    Tip = nullptr;
}

Incapere::Incapere(const unsigned int &o_Capacitate, char *un_tip) :
        Capacitate(o_Capacitate), ID(i++){

    Tip = new char [strlen(un_tip)+1];
    for(int i = 0; i < strlen(un_tip); i++)
    {
        Tip[i] = un_tip[i];
    }
    Tip[strlen(un_tip)] = '\0';

}

Incapere::~Incapere() {
    delete[] Tip;
    //mno
}


//constructor de copiere
Incapere::Incapere(const Incapere &o_incapere) {
    ID = o_incapere.ID;

    Capacitate = o_incapere.Capacitate;

    Tip = new char [strlen(o_incapere.Tip)+1];

    for(int i = 0; i < strlen(o_incapere.Tip); i++)
    {
        Tip[i] = o_incapere.Tip[i];
    }
    Tip[strlen(o_incapere.Tip)] = '\0';
}

const char* Incapere::getTip() const{
    return Tip;
}

unsigned int Incapere::getId() const {
    return ID;
}

unsigned int Incapere::getCapacitate() const { return Capacitate; }

ostream &operator<<(ostream &out, const Incapere &o_Incapere){
    out<<o_Incapere.Tip<<" "<<o_Incapere.ID<<" de capacitate "<<o_Incapere.Capacitate<<endl;
    return out;
}

void Incapere::setId(unsigned int id) {
    ID = id;
}

void Incapere::setCapacitate(unsigned int capacitate) {
    Capacitate = capacitate;
}

void Incapere::setTip(char *tip) {
    Tip = tip;
}



