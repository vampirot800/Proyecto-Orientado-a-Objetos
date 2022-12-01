/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase Engines contiene uno de los
 *tres tipos de engines disponible (Ion Fuel)
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef IONFUEL_H_
#define IONFUEL_H_

#include <iostream>
using namespace std;
#include "Engines.h"

class IonFuel : public Engine
{

private:
    double consumoXen;
    double consumoElec;

public:
    IonFuel() : Engine(), consumoXen(0.0),consumoElec(0.0){}
    
    IonFuel(string tip, double mas, int cos, double atm,
            double vac, double atmT, double vacT, double consumoXen_c, double consumoElec_c) : Engine(tip, mas, cos, atm, vacT, atmT, vacT), consumoXen(consumoXen_c), consumoElec(consumoElec_c){};
    double GetConsumoXenon()
    {
        return consumoXen;
    }
    double GetTVC()
    {
        return consumoElec;
    }
};

#endif