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

#ifndef FT_RCS_H_
#define FT_RCS_H_

#include <iostream>
using namespace std;

//importacion de archivo de donde se hereda
#include "FuelTanks.h"

//Declaracion de clase RCSFT que hereda de FuelTanks
class RCSFT: public FuelTanks{

    //atributos
    private:
        int monocap;

    //metodos
    public:
        //constructores
        RCSFT () :
            FuelTanks(),
            monocap(0) {};

        RCSFT (string tip, double mas, int cos, int monocap_c) :
            FuelTanks(tip, mas, cos),
            monocap(monocap_c) {};

        //Getter
        float GetMonoCap(){
            return monocap;
        }

        //Funcion imprime stats para subclase de Fuel Tanks, se agregan variables 
        void showStatsFT(){

            cout << "Fuel Tank Type:" << GetTipo() << endl;
            cout << "Fuel Tank Mass:" << GetMasa() << endl;
            cout << "Fuel Tank Cost:" << GetCosto() << endl;
            cout << "MonoCap:" << GetMonoCap() << endl;


        }


};

#endif