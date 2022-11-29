/*
Proyecto Kerbal Space Program 
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clases hijas de la clase FuelTanks contiene uno de los
 *tres tipos de fuel tanks disponibles (RCSFuelTank)
 * Rocket FT, RCS FT, y Liquid FT
 */

#include <iostream>
using namespace std;
#include "fueltanks.h"


class RCSFT: public FuelTanks{

    private:
        int monocap;

    public:

        RCSFT():FuelTanks(){

        }

        float GetMonoCap(){
            return monocap
        }
        
}
