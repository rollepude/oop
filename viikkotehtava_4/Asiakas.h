#ifndef ASIAKAS_H
#define ASIAKAS_H

using namespace std;
class Asiakas {
private:
    string nimi;
    Pankkitili kayttotili;
    Luottotili luottotili;

public:
    Asiakas(string n, double luottoRaja)
        : nimi(n),
        kayttotili(n),
        luottotili(n, luottoRaja) {}

    string getNimi() const{
        return nimi;
    }

    void showSaldo() const{
        cout << "Käyttötilin saldo " << kayttotili.getBalance() << endl;
        cout << "Luottotilin saldo " << luottotili.getBalance() << endl;
    }

    bool talletus(double amount){
        bool ok = kayttotili.deposit(amount);
        if(ok){
            cout << "Pankkitili: talletus " << amount << "tehty" << endl;
            return ok;
        }
    }

    bool nosto(double amount){
        bool ok = kayttotili.withdraw(amount);
        if(ok){
            cout << "Pankkitili: nosto " << amount << " tehty" << endl;
            return ok;
        }
    }

    bool luotonMaksu(double amount){
        bool ok = luottotili.deposit(amount);
        if(ok){
            cout << "Luottotili: maksu " << amount << " tehty" << endl;
            return ok;
        }
    }

    bool luotonNosto(double amount) {
        bool ok = luottotili.withdraw(amount);
        if(ok){
            cout << "Luottotili: nosto " << amount << " tehty" << endl;
            return ok;
        }
    }

    bool tiliSiirto(double amount, Asiakas & vastaanottaja){
        if(amount <= 0){
            return false;
        }
        if(!kayttotili.withdraw(amount)){
            return false;
        }
        vastaanottaja.kayttotili.deposit(amount);

        cout << "Pankkitili: " << nimi << " siirtää " << amount << " " << vastaanottaja.nimi << ":lle" << endl;
        return true;
    }
};

#endif // ASIAKAS_H
