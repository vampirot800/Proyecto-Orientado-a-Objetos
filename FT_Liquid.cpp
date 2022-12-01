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
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#include "FT_Liquid.h"

LiquidFT::LiquidFT () {
    liquidCap = 0.0;
}

LiquidFT::LiquidFT (string tip, double mas, int cos, float liquidCap_c) {
    tipo = tip;
    masa = mas;
    costo = cos;
    liquidCap = liquidCap_c;
}

float LiquidFT::GetCap(){
    return liquidCap;
}
