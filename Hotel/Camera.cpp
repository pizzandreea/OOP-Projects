//
// Created by andreea on 3/16/2021.
//

#include "Camera.h"

Camera::Camera() :
        id(0), capacitate(0),nr_persoane(0) {
    persoane_cazate = new Participant[1001];

    for(int i = 0; i <= 366; i++)
        data[i] = 0;

}

Camera::Camera(const unsigned int &un_id, const unsigned int &o_capacitate, const unsigned int &un_nr_persoane) :
    id(un_id), capacitate(o_capacitate), nr_persoane(un_nr_persoane){
    persoane_cazate = new Participant[1001];

    for(int i = 0; i <= 366; i++)
        data[i] = 0;
}

Camera::Camera(const Camera &o_camera){
    id = o_camera.id;
    capacitate = o_camera.capacitate;
    nr_persoane = o_camera.nr_persoane;

//    copy persoane_cazate

    persoane_cazate = new Participant[1001];

    for(int i = 0; i < nr_persoane; ++i)
        persoane_cazate[i] = o_camera.persoane_cazate[i];

    for(int i = 0; i <= 366; i++)
        data[i] = o_camera.data[i];

}

Camera::~Camera() {
    delete[] persoane_cazate;
}

//getter
unsigned int Camera::getId() const {
    return id;
}

unsigned int Camera::getCapacitate() const {
    return capacitate;
}

Participant *Camera::getPersoane_cazate() const {
    return persoane_cazate;
}

void Camera::setId(int un_id) {
    id = un_id;
}

void Camera::setCapacitate(int o_capacitate) {
    capacitate = o_capacitate;
}

unsigned int Camera::getPersoana() const {
    return nr_persoane;
}


void Camera::setPersoaneCazate(Participant *o_persoane_cazate, unsigned int un_nr_persoane) {
//    am transmis si numarul de persoane din vector
//    si am copiat persoanele pe rand

    persoane_cazate = new Participant[1001];
    nr_persoane = un_nr_persoane;

    for(int i = 0; i < nr_persoane; ++i)
        persoane_cazate[i] = o_persoane_cazate[i];
}


bool Camera::operator>=(const Camera &o_camera) const {
    if(capacitate >= o_camera.capacitate)
        return true;
    else return false;
}

Camera& Camera::operator=(const Camera &o_camera) {
    capacitate = o_camera.capacitate;
    nr_persoane = o_camera.nr_persoane;
    id = o_camera.id;

    if(persoane_cazate != nullptr){
        delete []persoane_cazate;
    }
    persoane_cazate = new Participant[nr_persoane + 1];

    for(int i = 0; i < o_camera.nr_persoane; i++)
        persoane_cazate[i] = o_camera.persoane_cazate[i];

    for(int i = 0; i <= 366; i++)
        data[i] = o_camera.data[i];
    return *this;

}

unsigned int Camera::operator+(Camera &o_camera) {
    return capacitate + o_camera.capacitate;
}
