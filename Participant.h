//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_PARTICIPANT_H
#define PROIECT_PARTICIPANT_H
#include <cstring>
//#include "Grup.h"
class Grup;
#include "Apartament.h"


class Participant {

    char dejun;    //dejun la restaurant (r) sau in camera (c)
    char *nume;
    int id_camera;      //id ul camerei in care este cazat

public:

// constructors
    Participant();
    Participant(const char* un_nume,const char un_dejun,const int &un_id);

//    constructor copiere
    Participant(const Participant &un_paricipant);

//    destructor
    ~Participant();

    char getDejun() const;

    char *getNume() const;

    void setDejun(char dejun);

    void setNume(char *nume);

    int getIdCamera() const;

    void setIdCamera(int idCamera);

    Participant& operator=(const Participant &un_participant);

    int operator[](int i);

    friend class Grup;
};


#endif //PROIECT_PARTICIPANT_H
