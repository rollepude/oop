#ifndef LUOTTOTILI_H
#define LUOTTOTILI_H

using namespace std;
class Luottotili : public Pankkitili {

private:
    double luottoRaja;

public:
    Luottotili(string nimi, double raja)
        : Pankkitili(nimi), luottoRaja(raja) {}

    bool deposit(double amount) override{
        if(amount <= 0){
            return false;
        }
            if(saldo + amount > 0){
                saldo = 0;
            }
            else{
                saldo += amount;
            }
            return true;
        }

    bool withdraw(double amount) override{
        if(amount <= 0){
            return false;
        }
        if(saldo - amount < -luottoRaja){
            return false;
        }
        saldo -= amount;
        return true;

    }
};


#endif // LUOTTOTILI_H
