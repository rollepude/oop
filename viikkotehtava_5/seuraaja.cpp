#include "seuraaja.h"
#include <iostream>
using namespace std;

//Seuraaja();
//Seuraaja(string);
//string getNimi();
//void paivitys(string);

Seuraaja::Seuraaja()
{
    cout << "Seuraaja konstruktori" << endl;
}

Seuraaja::Seuraaja(string aNimi)
{
    cout << "S param konst" << endl;
    nimi = aNimi;
}

string Seuraaja::getNimi()
{
    cout << "getN" << endl;
    return(nimi);
}

void Seuraaja::paivitys(string viesti)
{
    cout << "paivitys" << endl;
    cout << "Viesti: " << viesti << endl;
}
