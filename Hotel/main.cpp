#include <iostream>
#include <string>
#include <vector>
#include "Grup.h"
#include "Incapere.h"
#include "Participant.h"
#include "Hotel.h"
#include "Sala.h"
#include "Apartament.h"

using namespace  std;

int main() {
    Hotel hotel(8,3,4,7,"Jane");

//    cin>>hotel;

    Incapere incap(1, 2, (char*)"Camera");
    hotel.Adauga_incapere(incap);



//    char* p = new char[10];
//    strcpy(p, "Camera");
//    char* a = new char[10];
//    strcpy(a, "Apartament");
//
//    Incapere Camera1(1,2,(char*)"apartmanet");
//    Incapere Camera2(2,3,(char*)"Camera");
////    cout<<Camera1.getTip();
//    cout<<"andrei";
//
//    char *nume;
//    strcpy(nume, "Andrei");


//    Participant p1((char*)"Andrei", 'r');
//    cout<<p1.getDejun()<<" "<<p1.getNume()<<endl;
//
//    cout<<hotel;
//    cout<<Camera1;
//    cout<<Camera2;
//
//    Grup grup1;
//    Grup grup2(1,4,"masa");
//    cout<<grup1<<grup2;
    return 0;
}
