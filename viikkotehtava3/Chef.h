#ifndef CHEF_H
#define CHEF_H

using namespace std;

class Chef{
protected:
    string chefName;

public:
    Chef(string name) : chefName(name) {
    cout << "Chef " << chefName << " konstruktori"<< endl;
    }

    virtual ~Chef() {
        cout << "Chef " << chefName << " destruktori"<< endl;
    }

    int makeSalad(int ingredients) {
        int portions = ingredients / 5;
        cout << "Chef " << chefName << " with " << ingredients << " items can make salad " <<portions << " portions" << endl;
        return portions;
    }

    int makeSoup(int ingredients) {
        int portions = ingredients / 3;
         cout << "Chef " << chefName << " with " << ingredients << " items can make soup " <<portions << " portions" << endl;
        return portions;
    }
};
#endif
