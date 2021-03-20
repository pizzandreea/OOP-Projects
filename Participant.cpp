//
// Created by andreea on 3/16/2021.
//

#include "Participant.h"


Participant::Participant() :  Dejun('\0') {
    Nume = new char [50];
    Nume[0] = '\0';
}

Participant::Participant(char *un_Nume, char un_Dejun)
        :  Dejun(un_Dejun) {
    Nume = new char [50];
    for(int i = 0; i < strlen(un_Nume); i++)
    {
        Nume[i] = un_Nume[i];
    }
    Nume[strlen(un_Nume)] = '\0';

}

Participant::Participant(const Participant &un_paricipant){
    Dejun = un_paricipant.Dejun;

    Nume = new char [50];
    for(int i = 0; i < strlen(un_paricipant.Nume); i++)
    {
        Nume[i] = un_paricipant.Nume[i];
    }
    Nume[strlen(un_paricipant.Nume)] = '\0';

}

Participant::~Participant() {
    delete[] Nume;
}

Participant Participant:: operator=(const Participant &un_participant){

    Nume = new char [strlen(un_participant.Nume) + 1];

    for(int i = 0; i < strlen(un_participant.Nume); ++i)
    {
        Nume[i] = un_participant.Nume[i];
    }
    Nume[strlen(un_participant.Nume)] = '\0';

    Dejun = un_participant.Dejun;

    return *this;
}

char Participant::getDejun() const {
    return Dejun;
}

char *Participant::getNume() const {
    return Nume;
}

void Participant::setDejun(char dejun) {
    Dejun = dejun;
}

void Participant::setNume(char *nume) {
    Nume = nume;
}

