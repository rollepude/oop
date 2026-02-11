#include <iostream>
#include <student.h>
#include<vector>
#include<algorithm>
using namespace std;



int main ()
{

    int selection =0;
    string sName;
    int sAge = 0;

    vector<Student>studentList;

    do
    {
        cout<<endl;
        cout<<"Select"<<endl;
        cout<<"Add students = 0"<<endl;
        cout<<"Print all students = 1"<<endl;
        cout<<"Sort and print students according to Name = 2"<<endl;
        cout<<"Sort and print students according to Age = 3"<<endl;
        cout<<"Find and print student = 4"<<endl;
        cin>>selection;

        switch(selection)
        {
        case 0:
            // Kysy käyttäjältä uuden opiskelijan nimi ja ikä
            // Lisää uusi student StudentList vektoriin.
            cout << "Valinta 0" << endl;

            cout << "Anna uuden opiskelijan nimi: " << endl;
            cin>> sName;
            cout << "Anna uuden opiskelijan ika: " << endl;
            cin>> sAge;

            studentList.emplace_back(sName, sAge);
            cout << "Lisattiin: " << sName << " " << sAge << endl;
            break;
        case 1:
            // Tulosta StudentList vektorin kaikkien opiskelijoiden
            // nimet.
            cout << "Valinta 1" << endl;
            cout << "Tulostetaan lista" << endl;
            for(auto& s : studentList)
            {
                //cout << s.getName() << ": " << s.getAge() << endl;
                s.printStudentInfo();
            }
            break;

        case 2:
            // Järjestä StudentList vektorin Student oliot nimen mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 2" << endl;
            cout << "Jarjestetaan aakkosjarjestykseen" << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getName() < b.getName();
            });

            for(auto& s : studentList)
            {
                s.printStudentInfo();
            }
            break;

        case 3:
            // Järjestä StudentList vektorin Student oliot iän mukaan
            // algoritmikirjaston sort funktion avulla
            // ja tulosta printStudentInfo() funktion avulla järjestetyt
            // opiskelijat
            cout << "Valinta 3" << endl;
            cout << "Jarjestetaan ikajarjestykseen" << endl;
            sort(studentList.begin(), studentList.end(), [](const Student &a, const Student &b){
                return a.getAge() < b.getAge();
            });

            for(auto& s : studentList)
            {
                s.printStudentInfo();
            }
            break;
        case 4:
        {
            // Kysy käyttäjältä opiskelijan nimi
            // Etsi studentListan opiskelijoista algoritmikirjaston
            // find_if funktion avulla löytyykö käyttäjän antamaa nimeä
            // listalta. Jos löytyy, niin tulosta opiskelijan tiedot.
            cout << "Valinta 4" << endl;

            cout << "Anna opiskelijan nimi: "<< endl;
            cin >> sName;

            vector<Student>::iterator it = studentList.begin();
            it = find_if(studentList.begin(), studentList.end(), [sName](const Student &a){
                return a.getName() == sName;
            });

            if (it != studentList.end()) {
                cout << "Opiskelija loytyi. Opiskelijan tiedot: " << endl;
                 it->printStudentInfo();
            } else {
                cout << "Opiskelijaa ei loytynyt." << endl;
            }

            break;
        }
        default:
            cout<< "Wrong selection, stopping..."<<endl;
            break;
        }
    }while(selection < 5);

return 0;
}



