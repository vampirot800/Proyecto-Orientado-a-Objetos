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

class FuelTanks {
    protected:
        string tipo;
        double masa;
        int costo;

    public:
        FuelTanks();
        FuelTanks(string tip, double mas, int cos);

        string GetTipo();
        double GetMasa();
        int GetCosto();
        void setTipo(string t);
        void setMasa(double m);
        void setCosto(int c);
};

#endif
