//
// Created by andreea on 3/16/2021.
//

#include "Participant.h"


Participant::Participant() : dejun('\0'),id_camera(0) {
    strcpy(nume, "");
}

Participant::Participant(const char *un_nume, const char un_dejun, const int &un_id)
        : dejun(un_dejun), id_camera(un_id) {
    nume = new char [strlen(un_nume)+1];

    strcpy(nume, un_nume);

}

Participant::Participant(const Participant &un_paricipant):
    Participant(un_paricipant.nume, un_paricipant.dejun, un_paricipant.id_camera){
}

Participant::~Participant() {
    delete[] nume;
}

char Participant::getDejun() const {
    return dejun;
}

char *Participant::getNume() const {
    return nume;
}

void Participant::setDejun(char dejun) {
    dejun = dejun;
}

void Participant::setNume(char *nume) {
    nume = nume;
}

int Participant::getIdCamera() const {
    return id_camera;
}

void Participant::setIdCamera(int un_id_camera) {
    id_camera = un_id_camera;
}



Participant &Participant::operator=( const Participant &un_participant){

    nume = new char [strlen(un_participant.nume) + 1];

    strcpy(nume, un_participant.nume);

    dejun = un_participant.dejun;

    id_camera = un_participant.id_camera;

    return *this;
}

//int Participant::operator[](int i) {
//    if( i >= 0 and i < )
//}


