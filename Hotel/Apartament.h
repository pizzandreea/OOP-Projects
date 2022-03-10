//
// Created by andreea on 3/23/2021.
//

#ifndef PROIECT_APARTAMENT_H
#define PROIECT_APARTAMENT_H

#include "Incapere.h"

class Participant;

class Apartament : public Incapere {
//    friend class Incapere;
    friend class Participant;

public:
//    constructors
    Apartament();
    Apartament(const unsigned int &un_id, const unsigned int &o_capacitate, const unsigned int &un_nr_persoane);

    //  constructor de copiere
    Apartament(const Apartament &o_camera);

//    destructor
    ~Apartament();

    unsigned int getId() const;

    unsigned int getCapacitate() const;

    Participant *getPersoane_cazate() const;

    unsigned int getPersoana() const;

    void setId(int id);

    void setCapacitate(int capacitate);

    void setPersoaneCazate(Participant *o_persoane_cazate, unsigned int un_nr_persoane);

    bool operator>=(const Apartament &un_apartament) const;

    Apartament& operator=(const Apartament &un_apartament);

    int liber(){
        for(int i = 0; i <= 366; i++)
            if(data[i] == 0)
                return i;
        return -1;
    }

    unsigned int operator+(Apartament &un_apartament);           //adunam capacitatea a 2 apartamente

protected:

private:
    unsigned int id;
    unsigned int capacitate;
    Participant* persoane_cazate;
    unsigned int nr_persoane;      //nr persoane cazate


};


#endif //PROIECT_APARTAMENT_H
