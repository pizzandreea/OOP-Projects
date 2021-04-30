//
// Created by andreea on 3/16/2021.
//

#ifndef PROIECT_SALA_H
#define PROIECT_SALA_H
#include "Incapere.h"
#include <cstring>

class Sala: public Incapere {

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

    unsigned int getCapacitate() const;

    char *getAddon() const;

    void setId(unsigned int id);

    void setCapacitate(int o_capacitate);

    void setAddon(char *un_addon);

    Sala& operator=(const Sala &o_sala);

//    nu stiu cum sa declar metoda in .cpp
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
    char* addon;    //masa/ scena/ etc

};


#endif //PROIECT_SALA_H
