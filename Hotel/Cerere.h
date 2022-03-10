//
// Created by andreea on 3/18/2021.
//

#ifndef PROIECT_CERERE_H
#define PROIECT_CERERE_H
#include "Grup.h"
#include "Incapere.h"

class Cerere {

public:
    friend class Incapere;
//   constructors

    Cerere();

    Cerere(const unsigned int &un_id, Grup un_grup, const unsigned int &o_sedere, bool un_tip);

//    constructor de copiere
    Cerere(const Cerere &o_cerere);

//    destructor
    ~Cerere();

    int getId() const;

    int getSedere() const;

    void setSedere(int o_sedere);

    void setId(int id);

    void setGrup(Grup un_grup);

    const Grup &getGrup() const;

    Cerere& operator=(const Cerere &o_cerere);


protected:
    unsigned int onorare;           //ziua in care poate fi onorata
    Incapere *incaperi;
    unsigned int nr_incaperi;       //nr de incaperi rezervate

private:
    bool tip;       //tip = 0 anulare   tip = 1 rezervare
    unsigned int id;
    Grup grup;
    unsigned int sedere;
    static int i;
};


#endif //PROIECT_CERERE_H
