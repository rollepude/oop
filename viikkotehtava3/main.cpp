#include <iostream>
#include "Chef.h"
#include "ItalianChef.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    Chef chef("Gordon");
    chef.makeSalad(11);
    chef.makeSoup(14);

    cout << endl;

    ItalianChef italianChef("Mario");
    italianChef.makeSalad(9);
    italianChef.makeSoup(9);
    italianChef.askSecret("pizza", 12, 12);

    return 0;
}
