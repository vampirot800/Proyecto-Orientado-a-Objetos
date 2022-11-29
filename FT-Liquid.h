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
using namespace std;
#include "fueltanks.h"


class LiquidFT: public FuelTanks{

    private:
        float liquidCap;

    public:

        LiquidFT():FuelTanks(){

        }

        float GetCap(){
            return liquidCap
        }
}
