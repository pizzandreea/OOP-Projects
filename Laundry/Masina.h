//
// Created by andreea on 4/30/2021.
//

#ifndef MAIN_MASINA_H
#define MAIN_MASINA_H
#include "Haine.h"
#include <vector>

static int detergent;

class Masina {
public:

    Masina();

    Masina(const unsigned int &Id, const unsigned int &nrHaine, const vector<Haina*> &haine);

    Masina(const Masina &o_masina);

    virtual ~Masina(){
        m_haine.clear();
    }

    virtual unsigned int getId() const;

    virtual unsigned int getCapacitate() const;

    virtual unsigned int getNrHaine() const;

    virtual void setId(unsigned int id);

    virtual void setNrHaine(unsigned int nrHaine);

    virtual void setHaine(const vector<Haina *> &haine);

    Masina& operator=(const Masina &o_masina);

    virtual void adaugaHaina(const Haina &);

//    virtual Haina*get(int i);
//
//    virtual void  update(int i, const Haina& o_haina);
//
//    virtual void  remove(const Haina& o_haina);

private:
    unsigned int m_id;
    const int m_capacitate;    // exprimata fie in greutate/nr articole

//    const int m_durata;          // durata programului in functie de tipul de masina
//    const int detergent;      pt masina de spalat

    unsigned int m_nrHaine;           // nr de haine din masina
    vector <Haina*> m_haine;         // hainele din masina

};


#endif //MAIN_MASINA_H
