//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_HOTEL_H
#define PROIECT_HOTEL_H

//#include "Incapere.h"
class Incapere; // forward declaration

#include "Cerere.h"
#include "Incapere.h"
#include "Sala.h"

#include <cstring>
#include <iostream>

using namespace std;

class Hotel {

public:
    friend class Incapere;
    friend class Cerere;
//    constructori
    Hotel();
    Hotel(const unsigned int &o_Capacitate, const unsigned int &un_nr_incaperi, const unsigned int &un_nrsali, const int &o_Cap_restaurant, const char* un_nume);

    Hotel(const Hotel &un_hotel);



//    destructor
    ~Hotel();

    Incapere *getIncaperi() const;

    int getCapacitate() const;

    const int getCapRestaurant() const;

    const char *getNume() const;

    unsigned int getNrIncaperi() const;

    void setNrIncaperi(unsigned int nrIncaperi);

    unsigned int getNrCereri() const;

    void setNrCereri(int nrCereri);

    void setIncaperi(Incapere *n_incaperi, unsigned int un_nr_incaperi);

    void setCereri(Cerere *cereri, unsigned int un_nr_cereri);

    void setCapacitate(unsigned int o_capacitate);

    void setNume(const char *un_nume);

    void setCapRestaurant(unsigned int capRestaurant);

    unsigned int getLocuriLibere() const;

    void setLocuriLibere(unsigned int locuriLibere);

    friend ostream &operator<<(ostream &os, const Hotel &un_Hotel);

    void Adauga_incapere(Incapere &o_incapere);

    void Adauga_sala(Sala &o_sala);

    void Primire_cerere(Cerere &o_cerere);

    friend istream &operator>>(istream &in,  Hotel &un_Hotel );




protected:


private:

    Incapere *incaperi;
    Sala *sali;
    unsigned int capacitate_totala;
    unsigned int locuri_libere;
    int cap_restaurant;    //capacitate_totala restaurant
    const char* nume;
    unsigned int nr_incaperi;
    unsigned int nr_sali;
    Cerere *cereri;
    unsigned int nr_cereri;


};



#endif //PROIECT_HOTEL_H
