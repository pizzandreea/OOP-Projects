//
// Created by andreea on 4/30/2021.
//

#ifndef MAIN_OPERATIUNE_H
#define MAIN_OPERATIUNE_H
#include <string>

using  namespace std;

class Operatiune {
public:
    Operatiune();

    Operatiune(string nume, const unsigned int &durata);

    Operatiune(const Operatiune& op);

    ~Operatiune()= default;


private:
    string m_nume;
    unsigned int m_durata;


};


#endif //MAIN_OPERATIUNE_H
