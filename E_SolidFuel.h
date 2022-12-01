/*
Proyecto Kerbal Space Program 
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase Engines contiene uno de los
 *tres tipos de engines disponible (Solid Fuel)
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef E_SOLIDFUEL_H_
#define E_SOLIDFUEL_H_

#include <iostream>
using namespace std;
#include "Engines.h"

class SolidFuel: public Engine{

    private:
        float burn;
        int comb;

    public:
        SolidFuel();
        SolidFuel(string tip, double mas, int cos, double atm,  double vac,double atmT, double vacT, float burn_c, int comb_c);
        
        float GetBurn();
        int GetComb();
};
SolidFuel::SolidFuel(){
    burn = 0.0;
    comb = 0;
}


#endif