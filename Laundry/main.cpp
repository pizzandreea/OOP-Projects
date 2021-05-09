#include <iostream>
#include "Spalatorie.h"
#include "Haine.h"
#include "Operatiune.h"
#include "MasinaSpalat.h"
#include "MasinaStors.h"
#include "Camasa.h"
#include "Costum.h"

using namespace std;

int main() {

//    Spalatorie
//     masinile 5 din fiecare
    Spalatorie *spalatorie = spalatorie->getInstance();


//    int i;
//    do{
        spalatorie->adaugaComanda();
        spalatorie->procesareComanda();
        spalatorie->spalare();

//    }
//    while (cin >> i);




    return 0;
}

//vector <Haina*> haine;
//    MasinaSpalat *masina1 = new MasinaSpalat(1, 6, haine);
//
//    Camasa *camasa1 = new Camasa(1, 6, 10, 20, false, false);
//
//    cout << masina1->incapeHaina(camasa1);