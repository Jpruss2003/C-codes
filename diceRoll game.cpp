// diceRoll game.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int roll() {
    return (rand() % 6) + 1;
}




// Function to play the dice game
void game(int* score, int* wins, int* losses) {
    int target, Total, die1, die2;

    // Initial roll
    die1 = roll();
    die2 = roll();
    Total = die1 + die2;
    cout << " The first roll is " << die1 << " and " << " the second roll is " << die2 << endl;
    cout << "Roll total: " << Total << endl;

    // Determine outcome of initial roll
    if (Total == 7 || Total == 11) {
        cout << "You win, 10 points will be added to your score " << endl;
        *score += 10;
        (*wins)++;
    }
    else if (Total == 2 || Total == 3 || Total == 10 || Total == 12) {
        cout << "You lose, 11 points will be subtracted from your score " << endl;
        *score -= 11;
        (*losses)++;
    }
    else {
        target = Total;
        cout << "The target is:  " << target << endl;
        char letter;
        while (true) {
            cout << "Press 'r' to roll, or 'q' to quit: ";
            cin >> letter;
            cout << letter << endl;
            if (letter == 'q') {
                break;
            }
            else if (letter == 'r') {
                die1 = roll();
                die2 = roll();
                Total = die1 + die2;
                cout << " The first roll is " << die1 << " and " << " the second roll is " << die2 << endl;
                cout << "Roll total: " << Total << endl;
                if (Total == target) {
                    cout << "You win, 10 points will be added to your score " << endl;
                    *score += 10;
                    (*wins)++;
                    break;
                }
                else if (Total == 7) {
                    cout << "You lose, 11 points will be subtracted from your score " << endl;
                    *score -= 11;
                    (*losses)++;
                    break;
                }
            }
        }
    }
}

int main()
{


    int seed, score = 0, wins = 0, losses = 0;
    char letter;
    cout << "Enter a seed value: ";
    cin >> seed;
    cout << "Seed value entered: " << seed << endl;

    // Setting up the seed for random number generation
    if (seed < 0) {
        srand(time(NULL));
    }
    else {
        srand(seed);
    }


    
    while (true) {
        cout << "--------------------------------------" << endl;
        game(&score, &wins, &losses);
        cout << "Score: " << score << endl;
        cout << "Wins: " << wins << endl;
        cout << "Losses: " << losses << endl;

        cout << "Press 'q' to quit or 'r' to keep rolling: ";
        cin >> letter;
        cout << letter << endl;
        if (letter == 'q') {
            break;
        }
    }


    int one, two, three, four, five, six;
    one = 0;
    two = 0;
    three = 0;
    four = 0;
    five = 0;
    six = 0;

    for (int i = 1; i < 60000; i++)
    {
        int roll = rand() % 6 + 1;
        if (roll == 1)
            one++;
        if (roll == 2)
            two++;
        if (roll == 3)
            three++;
        if (roll == 4)
            four++;
        if (roll == 5)
            five++;
        if (roll == 6)
            six++;



    }

    cout << "The results of 60,000 rolls: \n";

    cout << "number of Ones: " << one << endl;
    cout << "number of Twos: " << two << endl;
    cout << "number of Threes: " << three << endl;
    cout << "number of Fours: " << four << endl;
    cout << "number of Fives: " << five << endl;
    cout << "number of Sixes: " << six << endl;

}