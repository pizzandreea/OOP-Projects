//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_HOTEL_H
#define PROIECT_HOTEL_H


#include "Incapere.h"
#include <vector>
#include <cstring>

using namespace std;

class Hotel {

public:


//    constructori
    Hotel();
    Hotel(const int &o_Capacitate, const int &o_Cap_restaurant);

//    constuctor de copiere (cand vreodata sa-l folosesc, am doar un hotel)
    Hotel(const Hotel &un_hotel);
//    destructor
    ~Hotel();

    Incapere *getIncaperi() const;

    int getCapacitate() const;

    const int getCapRestaurant() const;

    char *getNume() const;

    void setIncaperi(Incapere *incaperi);

    void setCapacitate(int capacitate);

    void setNume(char *nume);

    friend ostream &operator<<(ostream &os, const Hotel &un_Hotel);

    void Adauga_Incapere(Incapere &o_Incapere);

    void Modifica_Capacitate(const int &o_Capacitate);

protected:


private:
    Incapere *Incaperi;
    int Capacitate;
    const int cap_restaurant;    //capacitate restaurant
    char* nume;

    void Adauga_Incapere(Incapere &o_Incapere);

    void Adauga_Incapere(Incapere &o_Incapere);
};


#endif //PROIECT_HOTEL_H
