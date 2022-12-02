/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/
/*
 *Clase FuelTanks contiene los métodos y atributos de los tanques
 *de combsutbles disponibles
 *tiene 3 clases hijas; los diferentes tipos de tanques que heredan los
 *atributos de la clase madre
 *RCS, Rocket FT y Liquid FT
 */

#ifndef FUELTANKS_H_
#define FUELTANKS_H_

#include <string>
#include <sstream>
using namespace std;

//Declaracion clase FuelTanks
class FuelTanks {

    //atributos protegidos que seran heredados
    protected:
        string tipo;
        double masa;
        int costo;
    //metodos publicos que seran heredados
    public:
        //constructores
        FuelTanks () { }
        FuelTanks (string tip, double mas, int cos) :
            tipo(tip),
            masa(mas),
            costo(cos) {};

        //getters y setters
        string GetTipo(){
            return tipo;
        }
        double GetMasa(){
            return masa;
        }
        int GetCosto(){
            return costo;
        }

        void setTipo(string t){
            tipo = t;
        }
        void setMasa(double m){
            masa = m;
        }
        void setCosto(int c){
            costo = c;
        }

        //Funcion imprime stats para Fuel Tanks
        void showStatsFT(){

            cout << "Fuel Tank Type:" << GetTipo() << endl;
            cout << "Fuel Tank Mass:" << GetMasa() << endl;
            cout << "Fuel Tank Cost:" << GetCosto() << endl;


        }
};

#endif
