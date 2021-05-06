#include <iostream>
#include "Spalatorie.h"
#include "Haine.h"
#include "Operatiune.h"
#include "MasinaSpalat.h"
#include "MasinaStors.h"

using namespace std;

int main() {

//    Spalatorie
    Spalatorie *spalatorie = spalatorie->getInstance();

    spalatorie->adaugaComanda();

//     masinile 5 din fiecare


    MasinaSpalat *masina1, *masina2;

    Haina haina1("Camasa", 1, 10, 10, false, false), *haina2 = new Haina("Camasa", 20, 10, 30, true, false);

//    masina1->adaugaHaina(haina1);



    return 0;
}
