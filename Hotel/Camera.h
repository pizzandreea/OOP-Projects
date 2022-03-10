//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_CAMERA_H
#define PROIECT_CAMERA_H
#include "Incapere.h"
#include "Participant.h"

class Hotel;

using namespace std;

class Camera : public Incapere{
    friend class Incapere;
    friend class Participant;
public:
//    constructors
    Camera();
    Camera(const unsigned int &un_id, const unsigned int &o_capacitate, const unsigned int &un_nr_persoane);

    //  constructor de copiere
    Camera(const Camera &o_camera);

//    destructor
    ~Camera();

    unsigned int getId() const;

    unsigned int getCapacitate() const;

    Participant *getPersoane_cazate() const;

    unsigned int getPersoana() const;

    void setId(int id);

    void setCapacitate(int capacitate);

    void setPersoaneCazate(Participant *o_persoane_cazate, unsigned int un_nr_persoane);

    bool operator>=(const Camera &o_camera) const;

    Camera& operator=(const Camera &o_camera);

    unsigned int operator+(Camera &o_camera);           //adunam capacitatea a 2 camere

    int liber(){
        for(int i = 0; i <= 366; i++)
            if(data[i] == 0)
                return i;
        return -1;
    }


protected:

private:
    unsigned int id;
    unsigned int capacitate;
    Participant* persoane_cazate;
    unsigned int nr_persoane;      //nr persoane cazate


};


#endif //PROIECT_CAMERA_H
