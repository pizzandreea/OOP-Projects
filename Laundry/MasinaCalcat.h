//
// Created by andreea on 5/2/2021.
//

#ifndef MAIN_MASINACALCAT_H
#define MAIN_MASINACALCAT_H

#include "Masina.h"

class MasinaCalcat: public Masina {
public:
    MasinaCalcat();

    MasinaCalcat(const unsigned int &id, const unsigned int &nrHaine, const vector<Haina*> &haine);

    MasinaCalcat(const MasinaCalcat &masina);

    ~MasinaCalcat() override{
        m_haine.clear();
    }

    unsigned int getId() const override;

    unsigned int getCapacitate() const override;

    unsigned int getNrHaine() const override;

    void setId(unsigned int id) override;

    void setNrHaine(unsigned int nrHaine) override;

    void setHaine(const vector<Haina *> &haine) override;

    void adaugaHaina(const Haina &) override;

    MasinaCalcat& operator=(const MasinaCalcat& o_masina);

//    Haina* get(int i);
//
//    void update(int i, const Haina& o_haina);
//
//    void remove(const Haina& o_haina);

private:
    unsigned int m_id;
    const int m_capacitate;    // 1 haina in masina

//    const int m_durata;
//    pt camasi 120 sec/kg
//    pt pantaloni 90 sec/kg
//    pt sacou   150 sec/kg
//    pt costum 150 + 90 sec/kg


    unsigned int m_nrHaine;           // nr de haine din masina
    vector <Haina*> m_haine;         // hainele din masina
};



#endif //MAIN_MASINACALCAT_H
