#ifndef NOTIFIKAATTORI_H
#define NOTIFIKAATTORI_H
#include "seuraaja.h"
using namespace std;

class Notifikaattori{

public:
    Notifikaattori();
    void poista(Seuraaja*);
    void lisaa(Seuraaja*);
    void tulosta();
    void postita(string);

private:
    Seuraaja* seuraajat = nullptr;
};

#endif // NOTIFIKAATTORI_H
