#include <iostream>
#include "Game.h"
using namespace std;

int main()
{
    Game game(50);
    game.Play();
    return 0;
}

Game::Game(int maxNumber) {
    this->maxNumber = maxNumber;
    cout << "Peli alkoi" << endl;
    numOfGuesses = 0;
    srand(time(0));
    randomNumber = rand() % maxNumber + 1;
}




void Game::Play() {
    int playerGuess;

    while(playerGuess != randomNumber)
    {
        cout << "Arvaa luku 1-" << maxNumber << endl;
        cin >> playerGuess;
        numOfGuesses++;
        if(playerGuess > randomNumber)
        {
            cout << "luku on pienempi" << endl;
        }
        else if(playerGuess < randomNumber)
        {
            cout << "luku on suurempi" << endl;
        }

    }
    printGameResult();
}
void Game::printGameResult() {
    cout << "Arvasit oikein numeron: " << randomNumber << " Arvauksia tarvittiin: " << numOfGuesses << endl;
}
