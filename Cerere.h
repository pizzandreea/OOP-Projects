//
// Created by andreea on 3/18/2021.
//

#ifndef PROIECT_CERERE_H
#define PROIECT_CERERE_H
#include "Grup.h"

class Cerere {

public:
//   constructors

    Cerere();
    Cerere(const int &o_sedere);
//    constructor de copiere
    Cerere(const Cerere &o_cerere);

//    destructor
    ~Cerere();

//    metoda adauga_cerere
    int getID() const;

    int getSedere() const;

    int getId() const;

    Grup *getGrup() const;

    void setSedere(int o_sedere);

    void setId(int id);

    void setGrup(Grup *grup);

protected:

private:
    int id;
    Grup *grup;
    int sedere;
    static int i;
};


#endif //PROIECT_CERERE_H
