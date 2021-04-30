//
// Created by andreea on 3/16/2021.
//


#include "Incapere.h"
#include <cstring>


int Incapere::i = 1;

Incapere::Incapere() :
        capacitate(0), id(i++), tip(nullptr){
    for(int i = 0; i <= 366; i++)
        data[i] = 0;

}

Incapere::Incapere(const unsigned int &un_id, const unsigned int &o_Capacitate, char *un_tip) :
        capacitate(o_Capacitate), id(i++){

    tip = new char [strlen(un_tip) + 1];
    strcpy(tip, un_tip);

    for(int i = 0; i <= 366; i++)
        data[i] = 0;


}

Incapere::~Incapere() {
    delete[] tip;
    //mno
}


//constructor de copiere
Incapere::Incapere(const Incapere &o_incapere):
    Incapere(o_incapere.id, o_incapere.capacitate, o_incapere.tip){

    for(int i = 0; i <= 366; i++)
        data[i] = o_incapere.data[i];
}

const char* Incapere::getTip() const{
    return tip;
}

unsigned int Incapere::getId() const {
    return id;
}


const int *Incapere::getData() const {
    return data;
}


unsigned int Incapere::getCapacitate() const { return capacitate; }

void Incapere::setId(unsigned int un_id) {
    id = un_id;
}

void Incapere::setCapacitate(unsigned int o_capacitate) {
    capacitate = o_capacitate;
}

void Incapere::setTip(char *un_tip) {
    strcpy(tip, un_tip);
}


Incapere &Incapere::operator=( Incapere &o_incapere) {

    id = o_incapere.id;
    strcpy(tip, o_incapere.tip);
    capacitate = o_incapere.capacitate;


    tip = new char [strlen(o_incapere.tip) + 1];

    strcpy(tip, o_incapere.tip);

    return *this;
}

ostream &operator<<(ostream &out, const Incapere &o_incapere){
    out << o_incapere.tip << " " << o_incapere.id << " de capacitate_totala " << o_incapere.capacitate ;

    return out;
}


bool Incapere::operator>=(const Incapere &o_incapere) {
    if(capacitate >= o_incapere.capacitate)
        return true;
    else return false;
}


int Incapere::liber() {
    for(int i = 1; i <= 366; i++)
        if(data[i] == 0)
            return i;
    return -1;
}

istream &operator>>(istream &in, Incapere &o_incapere) {

    char un_tip[21];
//    unsigned int o_capacitate;
//    unsigned int un_id;
//

    cout<<"\n Incaperea: ";
//    in>>un_tip;
//    strcpy(o_incapere.tip, un_tip);

    cout<<" cu id: ";
    in>>o_incapere.id;

    cout<<" are capacitatea: ";
    in>>o_incapere.capacitate;

    return in;

}


int Incapere::operator+(Incapere &o_incapere) {

    return capacitate + o_incapere.capacitate;
}





