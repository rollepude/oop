#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

using namespace std;

class ItalianChef : public Chef {
private:
    string password;

    int makePizza(int flour, int water) {

        int pizzasFromFlour = flour / 5;
        int pizzasFromWater = water / 5;
        int pizzas = min(pizzasFromFlour, pizzasFromWater);

        cout << "Italianchef "<< chefName << " with " << flour << " flour and " << water << " water can make " << pizzas << " pizzas"<< endl;
        return pizzas;
    }

public:
    ItalianChef(string name) : Chef(name), password("pizza") {

        cout << "ItalianChef " << chefName << " konstruktori"<< endl;
    }

    ~ItalianChef() {
        cout << "ItalianChef " << chefName << " destruktori"<< endl;
    }

    bool askSecret(string givenPassword, int flour, int water) {
        if (givenPassword == password) {
            cout << "password ok!" << endl;
            makePizza(flour, water);
            return true;
        } else {
            cout << "Wrong password" << endl;
            return false;
        }
    }
};

#endif
