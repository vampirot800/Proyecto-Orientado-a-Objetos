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

#include <string>
#include <sstream>
using namespace std;
#include "FuelTanks.h"

FuelTanks::FuelTanks (string tip, double mas, int cos){
    tipo = tip;
    masa = mas;
    costo = cos;
}

string FuelTanks::GetTipo(){
    return tipo;
}
double FuelTanks::GetMasa(){
    return masa;
}
int FuelTanks::GetCosto(){
    return costo;
}

void FuelTanks::setTipo(string t){
    tipo = t;
}
void FuelTanks::setMasa(double m){
    masa = m;
}
void FuelTanks::setCosto(int c){
    costo = c;
}