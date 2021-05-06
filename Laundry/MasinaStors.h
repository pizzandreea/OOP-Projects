//
// Created by andreea on 5/1/2021.
//

#ifndef MAIN_MASINASTORS_H
#define MAIN_MASINASTORS_H

#include "Masina.h"

class MasinaStors: public Masina {
public:
    MasinaStors();

    MasinaStors(const unsigned int &id, const unsigned int &kgHaine, const vector<Haina*> &haine);

    MasinaStors(const MasinaStors &o_masina);

    ~MasinaStors() override{
        m_haine.clear();
    }

    unsigned int getId() const override;

    unsigned int getCapacitate() const override;

    int getDurata() const;

    unsigned int getNrHaine() const override;

    void setId(unsigned int id) override;

    void setNrHaine(unsigned int kgHaine) override;

    void setHaine(const vector<Haina *> &haine) override;

    void adaugaHaina(const Haina &) override;

    MasinaStors& operator=(const MasinaStors& o_masina);

//    Haina* get(int i);
//
//    void update(int i, const Haina& o_haina);
//
//    void remove(const Haina& o_haina);

private:
    unsigned int m_id;
    const int m_capacitate;    // 10 kg de haine in masina
    const int m_durata;          // 10 de min durata programului

    unsigned int m_kgHaine;           // kg de haine din masina
    vector <Haina*> m_haine;         // hainele din masina
};


#endif //MAIN_MASINASTORS_H
