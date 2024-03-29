//
// Created by andreea on 4/30/2021.
//

#ifndef MAIN_COMANDA_H
#define MAIN_COMANDA_H

#include "Haine.h"
#include "Spalatorie.h"
#include "MasinaSpalat.h"
#include <vector>
#include "Pantaloni.h"
#include "Camasa.h"
#include "Rochie.h"
#include "Costum.h"
#include "Geaca.h"
#include "Palton.h"
#include "Sacou.h"

using namespace std;

class Comanda {
public:
    friend class Haina;
    friend class Spalatorie;
    friend class MasinaSpalat;
    Comanda();

    Comanda(const unsigned int &id, const unsigned int & nrHaine, const vector <Haina*> &haine);

    Comanda(const Comanda &o_comanda);

    ~Comanda();


    Comanda& operator=(const Comanda& comanda);
    friend istream& operator>>(istream& in, Comanda& comanda);





private:
    static int m_lastId;
    unsigned int m_idComanda;
    unsigned int m_nrHaine;
    vector <Haina*> m_haine;

//    in urma efectuarii comenzii
    unsigned int m_detergent;
    unsigned int m_durata;
};


#endif //MAIN_COMANDA_H
