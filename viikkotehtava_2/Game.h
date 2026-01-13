#ifndef GAME_H
#define GAME_H



class Game {
private:
    int maxNumber;
    int randomNumber;
    int numOfGuesses;


public:
    Game(int maxNumber);
    void Play();
    void printGameResult();
};

#endif // GAME_H
