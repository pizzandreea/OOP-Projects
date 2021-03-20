//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_PARTICIPANT_H
#define PROIECT_PARTICIPANT_H
#include <cstring>


class Participant {

    char Dejun;    //dejun la restaurant (r) sau in camera (c)
    char *Nume;
public:

// constructors
    Participant();
    Participant(char* un_Nume, char un_Dejun);

//    constructor copiere
    Participant(const Participant &un_paricipant);

//    destructor
    ~Participant();

    char getDejun() const;

    char *getNume() const;

    void setDejun(char dejun);

    void setNume(char *nume);

    Participant operator=(const Participant &un_participant);

protected:




};


#endif //PROIECT_PARTICIPANT_H
