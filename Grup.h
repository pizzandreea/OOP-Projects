//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_GRUP_H
#define PROIECT_GRUP_H

#include <iostream>

using namespace std;

class Grup {
    friend class Cerere;
public:
    friend ostream &operator<<(ostream &os, const Grup & un_grup);

//    constructors
    Grup();
    Grup(const unsigned int &un_id, const unsigned int &un_nrparticipanti);

//    constructor de copiere
    Grup(const Grup &un_grup);

//    getters and setters
    unsigned int getNrParticipanti() const;

    unsigned int getID() const;

    void setNr_participanti(const unsigned int &un_nrparticipanti);

    void setID(const unsigned int &id);


protected:

private:
    unsigned int id;
    unsigned int Nr_participanti;

};


#endif //PROIECT_GRUP_H
