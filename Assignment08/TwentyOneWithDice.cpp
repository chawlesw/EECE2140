/*
TwentyOneWithDice.cpp
Defines a Die class with a static constant max value of 6.
Simulates a two-player game of 21 between the user and the computer.
Player rolls until they choose to stop; computer stops automatically at 19 or more.

By: Charles Wan
EECE 2140 - Professor Nafa
14 March, 2026
*/

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class Die{
private:
    int currentValue = 0;
    int diceRolls = 0;
    static const int maxValue; // max face value of the die

public:
    void setCurrentValue(int currentValue){
        this->currentValue = currentValue;
    }
    int getCurrentValue()const{
        return currentValue;
    }
    int getDiceRolls()const{
        return diceRolls;
    }
    // rolls die and increments roll counter
    void rollDice(){
        currentValue = rand() % maxValue + 1;
        diceRolls++;
    }
};

const int Die::maxValue = 6;

// player rolls until they bust or choose to stop
void playerTurn(Die &die, int &playerTotal){
    char choice;
    do {
        die.rollDice();
        playerTotal += die.getCurrentValue();
        cout << "You rolled: " << die.getCurrentValue() << endl;
        cout << "Your total: " << playerTotal << endl;
        if(playerTotal > 21){
            cout << "You busted!" << endl;
            return;
        }
        cout << "Roll again? (y/n): ";
        cin >> choice;
    } while(choice == 'y' || choice == 'Y');
}

// computer rolls automatically until it reaches 19 or busts
void computerTurn(Die &die, int &computerTotal){
    while(computerTotal < 19){
        die.rollDice();
        computerTotal += die.getCurrentValue();
        cout << "Computer rolled: " << die.getCurrentValue() << endl;
        cout << "Computer total: " << computerTotal << endl;
        if(computerTotal > 21){
            cout << "Computer busted!" << endl;
            return;
        }
    }
}

// determines winner; both busting is a draw, ties go to the player
void determineWinner(int playerTotal, int computerTotal){
    if(playerTotal > 21 && computerTotal > 21)
        cout << "Both busted! Nobody wins!" << endl;
    else if(playerTotal > 21)
        cout << "Computer wins!" << endl;
    else if(computerTotal > 21)
        cout << "You win!" << endl;
    else if(playerTotal >= computerTotal)
        cout << "You win!" << endl;
    else
        cout << "Computer wins!" << endl;
}

int main(){
    srand(time(0)); // seed random number generator

    Die die;
    int playerTotal = 0;
    int computerTotal = 0;

    cout << "=== Game of 21 ===" << endl;

    // player goes first
    cout << "\n--- Your Turn ---" << endl;
    playerTurn(die, playerTotal);

    // computer goes second
    cout << "\n--- Computer's Turn ---" << endl;
    computerTurn(die, computerTotal);

    // display final totals and winner
    cout << "\n--- Final Results ---" << endl;
    cout << "Your total: " << playerTotal << endl;
    cout << "Computer total: " << computerTotal << endl;
    determineWinner(playerTotal, computerTotal);

    return 0;
}