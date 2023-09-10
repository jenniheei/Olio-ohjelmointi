#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Game {
  public:
    Game(int num){
        cout << "GAME CONSTRUCTOR: object initialized with " << num << "as a maximum value" << endl;
        maxNumber = num;
    }
    ~Game(){
        cout << "GAME DESTRUCTOR: object cleared from stack memory" << endl;
    }
    void play(){
        srand(static_cast<unsigned int>(time(nullptr)));


        int randomNumber = rand() % maxNumber + 1;



        do {
            cout << "Give your guess between 1 - " << maxNumber << endl;
            cin >> playerGuess;
            numOfGuesses++;

            if (playerGuess > randomNumber) {
                cout << "Your guess is too big" << endl;
            } else if (playerGuess > randomNumber) {
                cout << "Your guess is too small" << endl;
            } else {
               printGameResult();
            }
        } while (playerGuess != randomNumber);
    }

  private:
    int maxNumber = 0;
    int playerGuess = 0;
    int randomNumber = 0;
    int numOfGuesses = 0;
    void printGameResult(){
        cout << "You quessed the right answer = " << playerGuess << " with " << numOfGuesses << " quesses" << endl;
    }

};

int main()
{
    Game gameObject(10);
    gameObject.play();
    return 0;
}
