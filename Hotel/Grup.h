//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_GRUP_H
#define PROIECT_GRUP_H

#include <iostream>
#include <cstring>

#include "Participant.h"
//class Participant; // can't forward declare

using namespace std;

class Grup{
public:
    friend class Cerere;
    friend class Participant;
    friend ostream &operator<<(ostream &os, const Grup & un_grup);

//    constructors
    Grup();
    Grup(const unsigned int &un_id, const unsigned int &un_nrparticipanti, const char* un_addon);

//    constructor de copiere
    Grup(const Grup &un_grup);

//    getters and setters
    unsigned int getNrParticipanti() const;

    unsigned int getId() const;

    void set_participanti(const unsigned int &un_nrparticipanti, Participant n_participanti[1001]);

    void setID(const unsigned int &id);

    char *getAddon() const;

    void setAddon(char *addon);

    bool operator>=(const Grup &un_grup);

    Grup& operator=(const Grup& un_grup);




protected:

private:
    unsigned int id;
    unsigned int nr_participanti;
    char *addon;        //null sau sala cu  masa/ scena dorita
    Participant participanti[1001];

};



#endif //PROIECT_GRUP_H
