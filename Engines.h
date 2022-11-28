/*
Proyecto Kerbal Space Program 
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clase Engines contiene los métodos y atributos de los motores disponibles
 *tiene 3 clases hijas; los diferentes tipos de motores que heredan los 
 atributos de la clase madre
 * LiquidFuel, SolidFuel y IonFuel
 */

#ifndef ENGINES_H_
#define ENGINES_H_

#include <string>
using namespace std;

class Engine{

    private:
        string tipo;
        double masa;
        int costo;
        double atmThrust;
        double vacThrust;
        double atmTWR;
        double vacTWR;

    public:
        Engine(string tip, double mas, int cos, double atm,
        double vac, double atmT, double vacT){
            tipo = tip;
            masa = mas;
            costo = cos;
            atmThrust = atm;
            vacThrust = vac;
            atmTWR = atmT;
            vacTWR = vacT;

        }
        string GetTipo(){
            return tipo;
        }
        double GetMasa(){
            return masa;
        }
        int GeTCosto(){
            return costo;
        }
        double GetAtmthrust(){
            return atmThrust;
        }
        double GetVacthrust(){
            return vacThrust;
        }
        double GetAtmtwr(){
            return atmTWR;
        }
        double GetVactwr(){
            return vacTWR;
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
        void setatmThrust(double a){
            atmThrust = a;
        }
        void setvacThrust(double v){
            vacThrust = v;
        }
        void setatmTWR(double at){
            atmTWR = at;
        }
        void setvacTWR(double vt){
            vacTWR = vt;
        }
        

};

#endif