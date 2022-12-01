/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase FuelTanks contiene uno de los
 *tres tipos de fuel tanks disponibles (LiquidFuelTank)
 * Rocket FT, RCS FT, y Liquid FT
 */

#ifndef FT_LIQUID_H_
#define FT_LIQUID_H_

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

#include "FuelTanks.h"


class LiquidFT: public FuelTanks{

    private:
        float liquidCap;

    public:
        LiquidFT () :
            FuelTanks(),
            liquidCap(0.0) {};

        LiquidFT (string tip, double mas, int cos, float liquidCap_c) :
            FuelTanks(tip, mas, cos),
            liquidCap(liquidCap_c) {};

        float GetCap(){
            return liquidCap;
        }

};

#endif