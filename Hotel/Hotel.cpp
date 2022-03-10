//
// Created by andreea on 3/16/2021.
//
#include <iostream>

using namespace std;

#include "Hotel.h"



Hotel::Hotel() :
        capacitate_totala(0), nr_incaperi(0), nr_sali(0),cap_restaurant(0),locuri_libere(0), incaperi(nullptr), sali(
        nullptr), nume("Jane") {

}

Hotel::Hotel(const unsigned int &o_Capacitate, const unsigned int &un_nr_incaperi, const unsigned int &un_nrsali, const int &o_Cap_restaurant, const char* un_nume) :
        capacitate_totala(o_Capacitate),locuri_libere(o_Capacitate), nr_incaperi(un_nr_incaperi),nr_sali(un_nrsali), cap_restaurant(o_Cap_restaurant), incaperi(nullptr), sali(
        nullptr), nume("Jane") {
}

Hotel::Hotel(const Hotel &un_hotel):
        Hotel(un_hotel.capacitate_totala, un_hotel.nr_incaperi, un_hotel.nr_sali, un_hotel.cap_restaurant,un_hotel.nume){


//    Copiere vector dinamic de tip Incapere
    if(incaperi != nullptr)
        delete []incaperi;

    incaperi = new Incapere[1001];

    for(int i = 0; i < nr_incaperi; ++i)
        incaperi[i] = un_hotel.incaperi[i];

    if(sali != nullptr)
        delete [] sali;

    sali = new Sala[1001];

    for(int i = 0; i < nr_sali; ++i)
        sali[i] = un_hotel.sali[i];

}

Hotel::~Hotel() {
    delete [] incaperi;
    delete [] nume;
    delete [] sali;
}

Incapere *Hotel::getIncaperi() const {
    return incaperi;
}

int Hotel::getCapacitate() const {
    return capacitate_totala;
}

const int Hotel::getCapRestaurant() const {
    return cap_restaurant;
}

const char *Hotel::getNume() const {
    return nume;
}

void Hotel::setIncaperi(Incapere *n_incaperi, unsigned int un_nr_incaperi) {
    incaperi = new Incapere[1001];

    nr_incaperi = un_nr_incaperi;

    for(int i = 0; i < nr_incaperi; ++i)
        incaperi[i] = n_incaperi[i];


}

void Hotel::setCapRestaurant(unsigned int o_capRestaurant) {
    cap_restaurant = o_capRestaurant;
}

void Hotel::setCapacitate( unsigned int o_capacitate) {
    capacitate_totala = o_capacitate;
}

void Hotel::setNume(const char *un_nume) {
    Hotel::nume = un_nume;
}

unsigned int Hotel::getNrIncaperi() const {
    return nr_incaperi;
}

void Hotel::setNrIncaperi(unsigned int nrIncaperi) {
    nr_incaperi = nrIncaperi;
}

unsigned int Hotel::getNrCereri() const {
    return nr_cereri;
}

void Hotel::setNrCereri(int nrCereri) {
    nr_cereri = nrCereri;
}

void Hotel::setCereri(Cerere *n_cereri, unsigned int un_nr_cereri) {

    nr_cereri = un_nr_cereri;

    cereri = new Cerere[1001];

    for(int i = 0; i < un_nr_cereri; i++)
        cereri[i] = n_cereri[i];
}

unsigned int Hotel::getLocuriLibere() const {
    return locuri_libere;
}

void Hotel::setLocuriLibere(unsigned int n_locuri_libere) {
    locuri_libere = n_locuri_libere;
}



ostream &operator<<(ostream &out, const Hotel &un_Hotel){
    out <<"Hotelul" << un_Hotel.nume<<endl;
    out << "Capacitatea Hotelului este " << un_Hotel.capacitate_totala << endl;
    out << "Capacitatea Restaurantului este " << un_Hotel.cap_restaurant << endl;

    //    afisare incaperi

    out<< "Incaperile hotelului:"<<endl;
    for(int i = 0; i < un_Hotel.nr_incaperi; i++)
        out<<un_Hotel.incaperi[i] << endl;


    return out;
}



istream &operator>>(istream &in,  Hotel &un_Hotel) {

    char *un_nume;
    unsigned int o_capacitate;
    unsigned int o_cap_restaurant;
    unsigned int un_nr_incaperi;

    cout<<"Hotelul Jane";
    cout<<"\n Capacitatea hotelului:";
    in>>un_Hotel.capacitate_totala;

    cout<<"\n Capacitatea restaurantului:";
    in>>un_Hotel.cap_restaurant;

    cout<<"\n Numarul incaperilor:";
    in>>un_Hotel.nr_incaperi;


    cout<<"\n Incaperile";

    Incapere incapere;


    for(int i = 0; i < un_Hotel.nr_incaperi; i++)
    {
        in>>incapere;
//        un_Hotel.Adauga_incapere(incapere);

    }


    cout<<"\n\n Numarul salilor: ";
    in>>un_Hotel.nr_sali;

    Sala sala;

    for(int i = 0; i < un_Hotel.nr_sali; i++)
    {
        in>>sala;
//        un_Hotel.Adauga_sala(sala);

    }

    return in;
}

void Hotel::Adauga_incapere(Incapere &o_incapere) {
//    incaperi si nr_incaperi
    incaperi[++nr_incaperi] = o_incapere;
}

void Hotel::Adauga_sala(Sala &o_sala) {
    sali[++nr_sali] = o_sala;
}



void Hotel::Primire_cerere(Cerere &o_cerere) {
    cereri[++nr_cereri] = o_cerere;

//    if(o_cerere.getGrup().getNrParticipanti() <= locuri_libere)   //daca deja sunt locuri pentru cererea asta in hotel
//
//  cautam incaperi si sali in care sa ii cazam
//
//verificam pentru:
//-camere cu cea mai apropiata data cand poate caza nr de oameni din cerere,
//-apartamente cu cea mai apropiata data cand poate caza nr de oameni din cerere
//-salile care au cea mai apropiata data cand poate caza nr de oameni din cerere



}




