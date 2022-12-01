/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase Engines contiene uno de los
 *tres tipos de engines disponible (Liquid Fuel)
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef LIQUIDFUEL_H_
#define LIQUIDFUEL_H_

#include <iostream>
using namespace std;
#include "Engines.h"

class LiquidFuel : public Engine
{

private:
    double consumoMax;
    float TVC;

public:
    LiquidFuel();
    LiquidFuel(string tip, double mas, int cos, double atm,
               double vac, double atmT, double vacT, double consumoMax_c, float TVC_c);

    double GetConsumoMax()
    {
        return consumoMax;
    }
    float GetTVC()
    {
        return TVC;
    }
};

LiquidFuel::LiquidFuel() {
    consumoMax = 0.0;
    TVC = 0.0;
}


LiquidFuel::LiquidFuel(string tip, double mas, int cos, double atm, double vac, double atmT, double vacT, double consumoMax_c, float TVC_c) {
    tipo = tip;
    masa = mas;
    costo = cos;
    atmThrust = atm;
    vacThrust = vac;
    atmTWR = atmT;
    vacTWR = vacT;
    consumoMax = consumoMax_c;
    TVC = TVC_c;
};

#endif