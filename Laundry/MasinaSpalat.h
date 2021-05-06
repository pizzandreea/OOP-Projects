//
// Created by andreea on 5/1/2021.
//

#ifndef MAIN_MASINASPALAT_H
#define MAIN_MASINASPALAT_H
#include "Masina.h"

class MasinaSpalat: public Masina {
public:
    MasinaSpalat();

    MasinaSpalat(const unsigned int &id, const unsigned int &nrHaine, const vector<Haina*> &haine);

    MasinaSpalat(const MasinaSpalat& masina);

    ~MasinaSpalat(){
        m_haine.clear();
    }

    unsigned int getId() const override;

    unsigned int getCapacitate() const override;

    int getDurata() const;

    int getMDetergent() const;

    unsigned int getNrHaine() const override;

    void setId(unsigned int id) override;

    void setNrHaine(unsigned int nrHaine) override;

    void setHaine(const vector<Haina *> &haine) override;

    void adaugaHaina(const Haina &) override;

    MasinaSpalat& operator=(const MasinaSpalat& o_masina);

//    Haina* get(int i);
//
//    void update(int i, const Haina& o_haina);
//
//    void remove(const Haina& o_haina);

private:
    unsigned int m_id;
    const int m_capacitate;    // 10 kg de haine in masina
    const int m_durata;          // 30 de min durata programului
    const int m_detergent;        //  10 grame de detergent pt camasi si rochii
                                    // 20 grame de detergent pt pantaloni de culoare inchisa
                                    //100 grame de detergent pt orice alt articol

    unsigned int m_kgHaine;           // kg de haine din masina
    vector <Haina*> m_haine;         // hainele din masina
};


#endif //MAIN_MASINASPALAT_H
