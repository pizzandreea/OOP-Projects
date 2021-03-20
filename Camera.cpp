//
// Created by andreea on 3/16/2021.
//

#include "Camera.h"

Camera::Camera() :
        id(0), capacitate(0) {

}

Camera::Camera(const unsigned int &un_id, const unsigned int &o_capacitate) :
    id(un_id), capacitate(o_capacitate){
    persoane_cazate = new Participant[1001];
}

Camera::Camera(const Camera &o_camera){
    id = o_camera.id;
    capacitate = o_camera.capacitate;

//    copy persoane_cazate

    persoane_cazate = new Participant[1001];

    for(int i = 0; i < sizeof (o_camera.persoane_cazate); ++i)
        persoane_cazate[i] = o_camera.persoane_cazate[i];

}

Camera::~Camera() {
    delete[] persoane_cazate;
}

//getter
int Camera::getId() const {
    return id;
}

int Camera::getCapacitate() const {
    return capacitate;
}

Participant *Camera::getPersoaneCazate() const {
    return persoane_cazate;
}

void Camera::setId(int un_id) {
    id = un_id;
}

void Camera::setCapacitate(int o_capacitate) {
    capacitate = o_capacitate;
}

void Camera::setPersoaneCazate(Participant *o_persoaneCazate) {
    persoane_cazate = o_persoaneCazate;
}
