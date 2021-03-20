//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_CAMERA_H
#define PROIECT_CAMERA_H
#include "Incapere.h"
#include "Participant.h"
#include <vector>

using namespace std;

class Camera {
    friend class Incapere;
    friend class Participant;
public:
//    constructors
    Camera();
    Camera(const unsigned int &un_id, const unsigned int &o_capacitate);

    //  constructor de copiere
    Camera(const Camera &o_camera);

//    destructor
    ~Camera();

    int getId() const;

    int getCapacitate() const;

    Participant *getPersoaneCazate() const;

    void setId(int id);

    void setCapacitate(int capacitate);

    void setPersoaneCazate(Participant *persoaneCazate);

protected:

private:
    int id;
    int capacitate;
    Participant* persoane_cazate;


};


#endif //PROIECT_CAMERA_H
