#ifndef PANKKITILI_H
#define PANKKITILI_H

using namespace std;
class Pankkitili{
protected:
    string omistaja;
    double saldo;

public:
    Pankkitili(string nimi) : omistaja(nimi), saldo(0.0) {}

    virtual bool deposit(double amount){

        if(amount <= 0){
            return false;
        }
        saldo += amount;
        return true;
    }

    virtual bool withdraw(double amount){

        if(amount <= 0){
            return false;
        }
        if(amount > saldo){
            return false;
        }
        saldo -= amount;
        return true;
    }

    double getBalance() const{
        return saldo;
    }
};

#endif // PANKKITILI_H
