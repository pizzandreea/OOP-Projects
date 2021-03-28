//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_INCAPERE_H
#define PROIECT_INCAPERE_H

#include <iostream>
//#include "Camera.h"

//#include "Hotel.h"
class Hotel;


using namespace std;

class Incapere {
public:
//    constructori
    Incapere();

    Incapere(const unsigned int &un_id, const unsigned int &o_Capacitate, char* un_tip);

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

    const int *getData() const;

    friend ostream &operator<<(ostream &os, const Incapere &o_incapere);

    friend istream &operator>>(istream &is, Incapere &o_incapere);

    Incapere& operator=( Incapere& o_incapere);

    bool operator>=(const Incapere& o_incapere);

    virtual int operator+(Incapere &o_incapere);           //adunam capacitatea a 2 incaperi

    virtual int liber();            //returneaza cea mai apropiata zi cand v a fi libera incaperea

    friend class Hotel;

protected:
    unsigned int id;
    unsigned int capacitate;
    int data[367] ;

private:
    char * tip;
    static int i;
};


#endif //PROIECT_INCAPERE_H
