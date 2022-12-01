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
    Rocket()
    {
        pilot = "";
        cost = 0;
        mass = 0;
        hasLiquidFuel = false;
        hasIonFuel = false;
        hasSolidFuel = false;
        hasLiquidFT = false;
        hasRCSFT = false;
        hasRocketFT = false;
        hasPods = false;
    }

    Rocket(string pil)
    {
        pilot = pil;
        cost = 0;
        mass = 0;
    }

    string GetPilot()
    {
        return pilot;
    }

    void setPilot(string p)
    {
        pilot = p;
    }

    void addLiquidFuel()
    {
        e1 = LiquidFuel("LV-T45 Swivel", 1.50, 1200, 167.97, 215.0, 11.42, 14.62, 13.703, 3.0);
        hasLiquidFuel = true;
    }

    void addIonFuel()
    {

        e2 = IonFuel("IX-6315 Dawn", 0.25, 8000, 0.048, 2.0, 0.019, 0.816, 0.486, 8.741);
        hasIonFuel = true;
    }

    void addLiquidFT()
    {

        ft1 = LiquidFT("Mk1 Fuselage", 2.25, 550, 400);

        hasLiquidFT = true;
    }

    void addSolidFuel(int type)
    {
        if (type == 1)
        {
            e3 = SolidFuel("RT_10 Hammer", 3.56, 400, 197.90, 227.00, 5.66, 6.50, 23.7, 375);
        }
        else if (type == 2)
        {
            e3 = SolidFuel("BACC Thumper", 7.65, 850, 250.00, 300.00, 3.33, 4.00, 42.2, 820);
        }
        hasSolidFuel = true;
    }

    void addRCSFT()
    {

        ft2 = RCSFT("FL-R20", 0.10, 200, 20);

        hasRCSFT = true;
    }

    void addRocketFT()
    {

        ft3 = RocketFT("FL-T200", 1.125, 275, 90, 110);

        hasRocketFT = true;
    }

    void addPods(int type)
    {
        if (type == 1)
        {
            p1 = Pods("Mk1-Command Pod", 0.84, 600, 1);
        }
        else if (type == 2)
        {
            p1 = Pods("Mk1-3-Command Pod", 2.72, 3800, 3);
        }
        hasPods = true;
    }

    double addMassCost(){
        int masas = 0;
        int costos = 0;
        if (hasLiquidFuel) {
            masas += e1.GetMasa();
            costos += e1.GetCosto();
        }
        if (hasIonFuel) {
            masas += e2.GetMasa();
            costos += e2.GetCosto();
        }
        if (hasSolidFuel) {
            masas += e3.GetMasa();
            costos += e3.GetCosto();
        }
        return masas + costos;
    }
};

#endif