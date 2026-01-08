#include <iostream>
using namespace std;
int game(int maxnum);
int main()
{

    int guessAmount = game(20);
    cout << "Arvauksia oli " << guessAmount << endl;
    return 0;
}

int game(int maxnum)
{
    int guesses = 0;
    int guess = 0;
    srand(time(0));
    int randomNumber = rand() % maxnum + 1;
    cout << "Arvaa luku 1-" << maxnum << endl;
    while(guess != randomNumber)
    {

        cin >> guess;
        guesses++;
        if(guess > randomNumber)
        {
            cout << "luku on pienempi" << endl;
        }
        else if(guess < randomNumber)
        {
            cout << "luku on suurempi" << endl;
        }

    }
    cout << "oikea vastaus"<< endl;
    return guesses;
}
