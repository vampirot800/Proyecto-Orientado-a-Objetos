/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
*/

/*
 *Clase Rocket contiene los métodos requeridos para elegir y sumar todas
  las estadisticas del cohete, asi como composicion a las clases Engines.h,
  FuelTanks.h, y Pods
 */

#ifndef ROCKET_H_
#define ROCKET_H_

#include "E_IonFuel.h"
#include "E_LiquidFuel.h"
#include "E_SolidFuel.h"
#include "FT_Liquid.h"
#include "FT_RCS.h"
#include "FT_Rocket.h"
#include "Pods.h"

#include <string>
using namespace std;

class Rocket
{

private:
    string pilot;
    double cost;
    double mass;
    LiquidFuel e1;
    IonFuel e2;
    SolidFuel e3;
    LiquidFT ft1;
    RCSFT ft2;
    RocketFT ft3;
    Pods p1;
    bool hasLiquidFuel;
    bool hasIonFuel;
    bool hasSolidFuel;
    bool hasLiquidFT;
    bool hasRCSFT;
    bool hasRocketFT;
    bool hasPods;

    public:
        Rocket();
        Rocket(string pil);

        string GetPilot();
        void setPilot(string p);
        void addLiquidFuel();
        void addIonFuel();
        void addLiquidFT();
        void addSolidFuel(int type);
        void addRCSFT();
        void addRocketFT();
        void addPods(int type);
        double addMassCost();
};

#endif