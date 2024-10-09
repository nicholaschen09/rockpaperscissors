#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    cout << endl;
    int computer_score = 0, user_score = 0, winning_score = 3;
    string computer_choice, user_choice;
    string computer_choice_1 = "rock", computer_choice_2 = "paper", computer_choice_3 = "scissors";
    // Seed for random number generation
    srand(time(0));
    // Game loop continues until one player reaches 3 wins
    while (computer_score < winning_score && user_score < winning_score)
    {
        // Computer randomly selects rock, paper,or scissors
        int random = rand() % 3;
        if (random == 0)
            computer_choice = computer_choice_1;
        else if (random == 1)
            computer_choice = computer_choice_2;
        else
            computer_choice = computer_choice_3;

        // User input
        do
        {
            cout << "Choose rock, paper, or scissors: ";
            getline(cin, user_choice);
            // cin.ignore(); // This line should be removed to avoid ignoring user input after the first round.
        } while (user_choice != "paper" && user_choice != "scissors" && user_choice != "rock");

        cout << endl;
        cout << "you chose " << user_choice << endl;
        cout << "your opponent chose " << computer_choice << endl;

        if ((user_choice == "paper" && computer_choice == "rock") || (user_choice == "rock" && computer_choice == "scissors") || (user_choice == "scissors" && computer_choice == "paper"))
        {
            cout << "you win" << endl;
            cout << endl;
            user_score++;
        }
        else if ((user_choice == "rock" && computer_choice == "paper") || (user_choice == "scissors" && computer_choice == "rock") || (user_choice == "paper" && computer_choice == "scissors"))
        {
            cout << "your opponent wins" << endl;
            cout << endl;
            computer_score++;
        }
        else if (user_choice == computer_choice)
        {
            cout << "you tied with your opponent" << endl;
            cout << endl;
        }
    }
    cout << "--------------scores--------------" << endl;
    cout << endl;
    cout << "computer score: " << computer_score << endl;
    cout << "user score: " << user_score << endl;
    cout << endl;
    cout << "thank you for playing the game!" << endl;
}