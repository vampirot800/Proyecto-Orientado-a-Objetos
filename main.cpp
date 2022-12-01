/*
Proyecto Kerbal Space Program
Ramiro Flores Villarreal
A01710879
main.cpp
*/

#include <iostream>
#include <string>

#include "E_IonFuel.h"
#include "E_LiquidFuel.h"
#include "E_SolidFuel.h"
#include "FT_Liquid.h"
#include "FT_RCS.h"
#include "FT_Rocket.h"
#include "Rocket.h"
#include "Pods.h"

using namespace std;

void menu()
{

    cout << "Menu:\n";
    cout << "1. Engines\n";
    cout << "2. Fuel Tanks\n";
    cout << "3. Command Pods\n";
    cout << "4. Show Rocket stats\n";
    cout << "5. Quit\n\n";
}

void menu_engine()
{

    cout << "Choose your Engine:\n";
    cout << "1. Solid Fuel: ""RT_10 Hammer""\n";
    cout << "2. Solid Fuel: ""BACC Thumper""\n";
    cout << "3. Liquid Fuel: ""LV-T45 Swivel""\n";
    cout << "4. Ion Fuel: ""IX-6315 Dawn""\n\n";
}

void menu_ft()
{
    cout << "Choose your Fuel Tank:\n";
    cout << "1. Rocket Fuel Tank: ""FL-T200"" ";
    cout << "2. Liquid Fuel Tank: ""Mk1 Fuselage"" ";
    cout << "3. RCS Fuel Tank: ""FL-R20"" ";

}

void menu_pods()
{
    cout << "Choose your Command Pod:\n";
    cout << "1. MK-1:";
    cout << "2. MK-3:";
}

int main(int argc, char* argv[])
{
    int opcion = 0;


    Rocket pi = Rocket("");

    cout << "\n Wecome to the Kerbal Space program Vehicle Assembly Building!\n";
    cout << "\nWernher von Kerman: Welcome to today's lecture on vessel";
    cout << " construction. \nIm Wernher von Kerman. ";
    cout << "\nWhether you want to put, a satellite into orbit, make a";
    cout << " transcontinental flight, or step onto the very surface of the moon";
    cout << ",youre going to need to build yourself a ship.\n";
    cout << "It should be pretty easy even if youre not a famous rocket";
    cout << " scientist like myself.\n\n\n";

    string pilot;
    cout << "Please enter your name:";
    cin >> pilot;
    pi.setPilot(pilot);
    cout << "\nPilot: " << pi.GetPilot() << " Kerman\n"
         << endl;

    while (opcion < 5 && opcion > -1)
    {

        menu();
        cin >> opcion;
    /*
        switch (opcion)
        {

        case 1:
            menu_engine();
            int engine;
            cin >> engine;
            switch (engine)
            {
            case 1:
                pi.addSolidFuel(1);
                break;
            case 2:
                pi.addSolidFuel(2);
                break;
            case 3:
                pi.addLiquidFuel();
                break;
            case 4:
                pi.addIonFuel();
                break;
            };
            break;

        case 2:
            menu_ft();
            int fuelt;
            cin >> fuelt;
            switch (fuelt)
            {
            case 1:
                pi.addRocketFT();
                break;
            case 2:
                pi.addLiquidFT();
                break;
            case 3:
                pi.addRCSFT();
                break;
            };
            break;

        case 3:
            menu_pods();
            int pod;
            cin >> pod;
            switch (pod)
            {
            case 1:
                pi.addPods(1);
                break;
            case 2:
                pi.addPods(2);
                break;
            };

            break;

        case 4:

            break;
        }
    */
    }
}