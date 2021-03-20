//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_INCAPERE_H
#define PROIECT_INCAPERE_H

#include <iostream>
#include "Camera.h"
#include "Hotel.h"

using namespace std;

class Incapere {
public:
//    constructori
    Incapere();

    Incapere(const unsigned int &o_Capacitate, char* un_tip);

//    copiere
    Incapere(const Incapere &o_incapere);

//destructor
    ~Incapere();

//    getters and setters
    unsigned int getCapacitate() const;

    const char *getTip() const;

    unsigned int getId() const;

    void setId(unsigned int id);

    void setCapacitate(unsigned int capacitate);

    void setTip(char *tip);

    friend ostream &operator<<(ostream &os, const Incapere &o_Incapere);

    friend istream &operator>>(istream &is, Incapere &o_Incapere);

    friend class Hotel;

protected:
    unsigned int ID;
    unsigned int Capacitate;

private:
    char * Tip;
    static int i;
};



#endif //PROIECT_INCAPERE_H
