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
#include "fueltanks.h"

class RocketFT: public FuelTanks{

    private:
        float liquidCap;
        float oxidizer;

    public:

        RocketFT():FuelTanks(){

        }

        float GetCap(){
            return liquidCap
        }
        int GetOxidizer(){
            return oxidizer
        }
}
