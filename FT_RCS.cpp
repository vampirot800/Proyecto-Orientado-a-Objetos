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

#include <iostream>
using namespace std;
#include "FT_RCS.h"


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
