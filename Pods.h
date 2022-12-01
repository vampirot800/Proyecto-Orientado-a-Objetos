/*
Proyecto Kerbal Space Program 
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clase Pods contiene los métodos y atributos de las capsulas disponibles
 */

#ifndef PODS_H_
#define PODS_H_

#include <string>
using namespace std;

class Pods{

    private:
        string tipo;
        double masa;
        int costo;
        int capacidad;

    public:

    Pods(){
        tipo = "";
        masa = 0.0;
        costo = 0;
        capacidad = 0;

    }
        Pods(string tip, double mas, int cos, int cap){
            tipo = tip;
            masa = mas;
            costo = cos;
            capacidad = cap;
        }

        string GetTipo(){
            return tipo;
        }
        double GetMasa(){
            return masa;
        }
        int GetCosto(){
            return costo;
        }
        int GetCap(){
            return capacidad;
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
        void setCap(int ca){
            capacidad = ca;
        }




};
#endif
