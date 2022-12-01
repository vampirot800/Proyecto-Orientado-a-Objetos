/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase FuelTanks contiene uno de los
 *tres tipos de fuel tanks disponibles (RocketFuelTank)
 * Rocket FT, RCS FT, y Liquid FT
 */


#ifndef FT_ROCKET_H_
#define FT_ROCKET_H_

#include <iostream>
using namespace std;
#include "FuelTanks.h"

class RocketFT: public FuelTanks{
    private:
        float liquidCap;
        float oxidizer;

    public:
        RocketFT();
        RocketFT(string tip, double mas, int cos, float liquidCap_c, float oxidizer_c);

        float GetOxidizer();
        float GetCap();
};

#endif