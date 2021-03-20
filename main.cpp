#include <iostream>
#include <string>
#include <vector>
#include "Grup.h"
#include "Incapere.h"
#include "Participant.h"
#include "Hotel.h"
#include "Sala.h"

using namespace  std;

int main() {
    Hotel hotel(10,9);

    char* p = new char[10];
    strcpy(p, "Camera");
    char* a = new char[10];
    strcpy(a, "Apartament");

    Incapere Camera1(2, p);
    Incapere Camera2(3, a);
//    cout<<Camera1.getTip();
//    cout<<"andrei";
//
//    char *nume;
//    strcpy(nume, "Andrei");


//    Participant p1((char*)"Andrei", 'r');
//    cout<<p1.getDejun()<<" "<<p1.getNume()<<endl;
//
    cout<<hotel;
    cout<<Camera1;
    cout<<Camera2;

    Grup grup1;
    Grup grup2(5,4);
    cout<<grup1<<grup2;
    return 0;
}
