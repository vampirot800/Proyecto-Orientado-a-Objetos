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

#ifndef FT_LIQUID_H_
#define FT_LIQUID_H_

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

//importacion de archivo de donde se hereda
#include "FuelTanks.h"

//Declaracion de clase LiquidFT que hereda de FuelTanks
class LiquidFT: public FuelTanks{

    //atributos
    private:
        float liquidCap;

    //metodos
    public:
        //constructores
        LiquidFT () :
            FuelTanks(),
            liquidCap(0.0) {};

        LiquidFT (string tip, double mas, int cos, float liquidCap_c) :
            FuelTanks(tip, mas, cos),
            liquidCap(liquidCap_c) {};

        //Getter
        float GetCap(){
            return liquidCap;
        }

        //Funcion imprime stats para subclase de FT, se agregan variables 
        void showStatsFT(){

            cout << "Fuel Tank Type:" << GetTipo() << endl;
            cout << "Fuel Tank Mass:" << GetMasa() << endl;
            cout << "Fuel Tank Cost:" << GetCosto() << endl;
            cout << "Liquid Cap:" << GetCap() << endl;


        }

};

#endif