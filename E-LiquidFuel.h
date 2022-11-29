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

#include <iostream>
using namespace std;
#include "engines.h"

class LiquidFuel: public Engine{

    private:
        double consumoMax;
        float TVC;

    public:
        LiquidFuel()
        {}
        double GetConsumoMax(){
            return consumoMax
        }
        float GetTVC(){
            return TVC
        }
}