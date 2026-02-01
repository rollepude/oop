#include <iostream>
#include "Pankkitili.h"
#include "Luottotili.h"
#include "Asiakas.h"

using namespace std;

int main()
{

    cout << "Pankkitili luotu Aapelille" << endl;
    cout << "Luottotili luotu Aapelille, luottoraja 1000" << endl;

    Asiakas aapeli("Aapeli", 1000);
    cout << "Asiakkuus luotu Aapeli" << endl;
    aapeli.showSaldo();
    cout << endl;

    aapeli.talletus(250);
    aapeli.luotonNosto(150);
    cout << endl;

    aapeli.showSaldo();
    cout << endl;

    cout << "Pankkitili luotu Bertalle" << endl;
    cout << "Luottotili luotu Bertalle, luottoraja 1000" << endl;

    Asiakas bertta("Bertta", 1000);

    cout << "Asiakkuus luotu Bertta" << endl;
    bertta.showSaldo();
    cout << endl;

    cout << "Aapeli" << endl;
    aapeli.showSaldo();
    cout << endl;

    aapeli.tiliSiirto(50, bertta);
    cout << endl;

    cout << "Aapeli" << endl;
    aapeli.showSaldo();
    cout << endl;

    cout << "Bertta" << endl;
    bertta.showSaldo();

    return 0;
}
