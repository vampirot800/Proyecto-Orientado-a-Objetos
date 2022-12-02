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


#ifndef FT_ROCKET_H_
#define FT_ROCKET_H_

#include <iostream>
using namespace std;

//importacion de archivo de donde se hereda
#include "FuelTanks.h"

//Declaracion de clase RocketFT que hereda de FuelTanks
class RocketFT: public FuelTanks{

    //atributos
    private:
        float liquidCap;
        float oxidizer;

    //metodos 
    public:

        //constructores
        RocketFT () :
            FuelTanks(),
            liquidCap(0.0),
            oxidizer(0.0) {};

        RocketFT (string tip, double mas, int cos, float liquidCap_c, 
        float oxidizer_c) :
            FuelTanks(tip, mas, cos),
            liquidCap(liquidCap_c),
            oxidizer(oxidizer_c) {};

            //Getters y Setters
        float GetOxidizer(){
            return oxidizer;
        }

        float GetCap(){
            return liquidCap;
        }

        //Funcion imprime stats para subclase de Fuel Tanks,se agregan variables 
        void showStatsFT(){

            cout << "Fuel Tank Type:" << GetTipo() << endl;
            cout << "Fuel Tank Mass:" << GetMasa() << endl;
            cout << "Fuel Tank Cost:" << GetCosto() << endl;
            cout << "Oxidizer:" << GetOxidizer() << endl;
            cout << "Liquid Cap:" << GetCap() << endl;


        }

        

};

#endif