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

#include <iostream>
using namespace std;
#include "engines.h"

class IonFuel: public Engine{

    private:
        double consumoXen;
        double consumoElec;

    public:
        IonFuel()
        {}
        double GetConsumoXenon(){
            return consumoXen
        }
        double GetTVC(){
            return consumoElec
        }
}
