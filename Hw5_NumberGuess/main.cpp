#include <iostream>

using namespace std;

int main()
{

    int highest = 100;
    int lowest = 0;
    int attempts = 0;
    int guess = lowest + ((highest - lowest) * 0.5);
    char userInput;


    //only run once when the program started
    cout << "Think of a number between 1 and 100" << endl;

    while (userInput != 'q')
    {

        guess = lowest + ((highest - lowest) * 0.5);

        cout << "I guess " << guess << "." << " Am I right?" << endl;
        attempts++; //increment each time when guess has been made
        cout << "'q’ to quit, ‘y’ if correct, ‘h’ if too high, ‘l’ if too low." << endl;
        cin >> userInput;


        if (userInput == 'q')
            {
                cout << "You quit. Bye.’" << endl;
                break;
            }
        else if (userInput == 'y')
            {
                cout << "I guessed it in " << attempts << " attempts." << endl;
                break;
            }
        else if (userInput == 'h')
            {
                highest = guess;

            }
        else if (userInput == 'l')
            {
                lowest = guess;

            }
        else
            {
                cout << "I didn’t understand that response." << endl << endl;
                attempts--; //attempts dose not count and will be increment later when the loop jump back

            }

    }

    //return attempts
    return attempts;

}
