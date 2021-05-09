//
// Created by andreea on 5/2/2021.
//

#ifndef MAIN_MASINAUSCAT_H
#define MAIN_MASINAUSCAT_H


#include "Masina.h"

class MasinaUscat: public Masina {
public:
    MasinaUscat();

    MasinaUscat(const unsigned int &id, const unsigned int &nrHaine, const vector<Haina*> &haine);

    MasinaUscat(const MasinaUscat& o_masina);

    ~MasinaUscat() override{
        m_haine.clear();
    }

    unsigned int getId() const override;

    unsigned int getCapacitate() const override;

    int getDurata() const;

    unsigned int getNrHaine() const override;

    void setId(unsigned int id) override;

    void setNrHaine(unsigned int nrHaine) override;

    void setHaine(const vector<Haina *> &haine) override;


    void adaugaHaina(const Haina &) override;

    MasinaUscat& operator=(const MasinaUscat& o_masina);
//    Haina* get(int i);
//
//    void update(int i, const Haina& o_haina);
//
//    void remove(const Haina& o_haina);

private:
    unsigned int m_id;
    const int m_capacitate;    // 35 de haine in masina
    const int m_durata;          // 20 de min m_durata programului

    unsigned int m_nrHaine;           // nr de haine din masina
    vector <Haina*> m_haine;         // hainele din masina
};


#endif //MAIN_MASINAUSCAT_H
