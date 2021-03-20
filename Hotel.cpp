//
// Created by andreea on 3/16/2021.
//
#include <iostream>

using namespace std;

#include "Hotel.h"



Hotel::Hotel() :
        Capacitate(0), cap_restaurant(0) {
            Incaperi = new Incapere [1001];
}

Hotel::Hotel(const int &o_Capacitate, const int &o_Cap_restaurant) :
        Capacitate(o_Capacitate), cap_restaurant(o_Cap_restaurant) {
            Incaperi = new Incapere [1001];
}

Hotel::Hotel(const Hotel &un_hotel):
        cap_restaurant(un_hotel.cap_restaurant){
    Capacitate = un_hotel.Capacitate;

    nume = new char[50];

    for(int i = 0; i < strlen(un_hotel.nume); ++i)
    {
        nume[i] = un_hotel.nume[i];
    }
    nume[strlen(un_hotel.nume)] = '\0';

//    Copiere vector dinamic de tip Incapere

}

Hotel::~Hotel() {
    delete [] Incaperi;
    delete [] nume;
}

Incapere *Hotel::getIncaperi() const {
    return Incaperi;
}

int Hotel::getCapacitate() const {
    return Capacitate;
}

const int Hotel::getCapRestaurant() const {
    return cap_restaurant;
}

char *Hotel::getNume() const {
    return nume;
}

void Hotel::setIncaperi(Incapere *incaperi) {
    Incaperi = incaperi;
}

void Hotel::setCapacitate(int capacitate) {
    Capacitate = capacitate;
}

void Hotel::setNume(char *nume) {
    Hotel::nume = nume;
}

void Hotel::Modifica_Capacitate(const int &o_Capacitate){
    Capacitate = o_Capacitate;
}

ostream &operator<<(ostream &out, const Hotel &un_Hotel){
    out<<"Capacitatea Hotelului este "<<un_Hotel.Capacitate<<endl;
    out << "Capacitatea Restaurantului este " << un_Hotel.cap_restaurant << endl;
//    afisare incaperi
    return out;
}



