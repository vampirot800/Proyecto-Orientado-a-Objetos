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

#include <iostream>
using namespace std;
#include "engines.h"

class SolidFuel: public Engine{

    private:
        float burn;
        int comb;

    public:
        SolidFuel(string tip, double mas, int cos, double atm,
        double vac,double atmT, double vacT, float burn, int comb) :Engine(){   
        }
        float GetBurn(){
            return burn
        }
        int GetCombestible(){
            return comb
        }

};