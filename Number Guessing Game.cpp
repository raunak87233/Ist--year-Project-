#include <iostream>
#include <cstdlib> // Required for srand() and rand() functions
#include <ctime>   // Required for time() function

using namespace std;

int main()
{
    int num, guess, tries = 0; // Declare variables num, guess, and tries, initialize tries to 0
    srand(time(0));            // Seed the random number generator with the current time
    num = rand() % 100 + 1;    // Generate a random number between 1 and 100
    cout << "Guess My Number Game\n\n"; // Print a welcome message

    // Start of the do-while loop for the game
    do
    {
        cout << "Enter a guess between 1 and 100 : "; // Prompt the user for input
        cin >> guess;                                  // Read user's guess
        tries++;                                       // Increment the number of tries

        string stri = to_string(tries); // Convert the number of tries to a string

        if (tries == 8) // If the number of tries reaches 8
        {
            cout << "You lose!\n\n"; // Inform the user that they lost
        }

        // Check if the guess is too high or too low
        if (guess > num)
        {
            cout << "Too high!\n\n"; // Inform the user that the guess is too high
            cout << stri << endl;    // Print the number of tries
        }
        else if (guess < num)
        {
            cout << "Too low!\n\n"; // Inform the user that the guess is too low
            cout << stri << endl;   // Print the number of tries
        }
        else
        {
            cout << "\nCorrect! You got it in " << tries << " guesses!\n"; // Inform the user that they guessed correctly
        }
    } while (guess != num); // Continue the loop until the user's guess matches the generated number

    return 0; // Exit the program
}
