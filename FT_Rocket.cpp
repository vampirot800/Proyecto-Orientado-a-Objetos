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

#include <iostream>
using namespace std;
#include "FT_Rocket.h"

RocketFT::RocketFT (){
    liquidCap = 0.0;
    oxidizer = 0.0;
}

RocketFT::RocketFT (string tip, double mas, int cos, float liquidCap_c,
    float oxidizer_c){
    tipo = tip;
    masa = mas;
    costo = cos;
    liquidCap = liquidCap_c;
    oxidizer = oxidizer_c;
}

float RocketFT::GetOxidizer(){
    return oxidizer;
}

float RocketFT::GetCap(){
    return liquidCap;
}