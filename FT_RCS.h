/*
Proyecto Kerbal Space Program 
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase FuelTanks contiene uno de los
 *tres tipos de fuel tanks disponibles (RCSFuelTank)
 * Rocket FT, RCS FT, y Liquid FT
 */

#ifndef FT_RCS_H_
#define FT_RCS_H_

#include <iostream>
using namespace std;
#include "FuelTanks.h"


class RCSFT: public FuelTanks{

    private:
        int monocap;

    public:
        RCSFT();
        RCSFT(string tip, double mas, int cos, int monocap_c);

        float GetMonoCap();
};

RCSFT::RCSFT (){
    monocap = 0;
}

RCSFT::RCSFT (string tip, double mas, int cos, int monocap_c) {
    tipo = tip;
    masa = mas;
    costo = cos;
    monocap = monocap_c;
}

float RCSFT::GetMonoCap(){
    return monocap;
}
#endif