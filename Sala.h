//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_SALA_H
#define PROIECT_SALA_H

#include <cstring>

class Sala {

public:
//    constructors
    Sala();
    Sala(const unsigned int &un_id, const unsigned int &o_capacitate, const char* un_addon);

//    constructor de copiere
    Sala(const Sala &o_sala);

//    destructor
    ~Sala();

//    getters
    unsigned int getId() const;

    int getCapacitate() const;

    char *getAddon() const;

    void setId(unsigned int id);

    void setCapacitate(int capacitate);

    void setAddon(char *addon);

protected:

private:
    unsigned int id;
    int capacitate;
    char* addon;    //masa/ scena/ etc

};


#endif //PROIECT_SALA_H
