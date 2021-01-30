#include <iostream>

using namespace std;


char PLAYER_X = 'X';
char PLAYER_O = 'O';
//char lastPlayer = PLAYER_O;
//char currentPlayer = PLAYER_X;
char chosenSquare;

char board[3][5] =
    {
      {'1','2','3'},
      {'4','5','6'},
      {'7','8','9'},

    };


void drawBoardX(char userInput)
{
    while(true)
    {
        cout << endl;
        cout << "current board state:";
        cout << endl;
        cout << endl;
        //draw column for X
        for(int y = 0; y < 3; y++)
            {
            //draw row
            for(int x = 0; x < 3; x++)
                    {
                    if(x != 2)
                        {
                            cout << board[y][x];
                            cout << "|";
                        }
                    else //x = 2
                        {
                            cout << board[y][x];
                            cout << endl;
                            cout << endl;
                            cout << "-+-+-";
                            cout << endl;
                            cout << endl;
                        }

                    }
            }

            cout << "Player X, enter a number between 1 and 9: ";
            cin >> userInput;

            if (userInput == '1' && board[0][0] != 'O' && board[0][0] != 'X')
            {
                board[0][0] = PLAYER_X;
                break;
            }
            if (userInput == '2' && board[0][1] != 'O' && board[0][1] != 'X')
            {
                board[0][1] = PLAYER_X;
                break;
            }
            if (userInput == '3' && board[0][2] != 'O' && board[0][2] != 'X')
            {
                board[0][2] = PLAYER_X;
                break;
            }
            if (userInput == '4' && board[1][0] != 'O' && board[1][0] != 'X')
            {
                board[1][0] = PLAYER_X;
                break;
            }
            if (userInput == '5' && board[1][1] != 'O' && board[1][1] != 'X')
            {
                board[1][1] = PLAYER_X;
                break;
            }
            if (userInput == '6' && board[1][2] != 'O' && board[1][2] != 'X')
            {
                board[1][2] = PLAYER_X;
                break;
            }
            if (userInput == '7' && board[2][0] != 'O' && board[2][0]  != 'X')
            {
                board[2][0] = PLAYER_X;
                break;
            }
            if (userInput == '8' && board[2][1] != 'O' && board[2][1] != 'X')
            {
                board[2][1] = PLAYER_X;
                break;
            }
            if (userInput == '9' && board[2][2] != 'O' && board[2][2] != 'X')
            {
                board[2][2] = PLAYER_X;
                break;
            }
            else
            {
                cout << endl;
                cout << "That square is not available. or not a valid choice. Try Again." << endl;
                continue;
            }
    }
}

void drawBoardO(char userInput)
{

    while(true)
    {
        cout << endl;
        cout << "current board state:";
        cout << endl;
        cout << endl;
        //draw column for X
        for(int y = 0; y < 3; y++)
            {
            //draw row
            for(int x = 0; x < 3; x++)
                    {
                    if(x != 2)
                        {
                            cout << board[y][x];
                            cout << "|";
                        }
                    else //x = 2
                        {
                            cout << board[y][x];
                            cout << endl;
                            cout << endl;
                            cout << "-+-+-";
                            cout << endl;
                            cout << endl;
                        }

                    }
            }

            cout << "Player O, enter a number between 1 and 9: ";
            cin >> userInput;

            if (userInput == '1' && board[0][0] != 'O' && board[0][0] != 'X')
            {
                board[0][0] = PLAYER_O;
                break;
            }
            if (userInput == '2' && board[0][1] != 'O' && board[0][1] != 'X')
            {
                board[0][1] = PLAYER_O;
                break;
            }
            if (userInput == '3' && board[0][2] != 'O' && board[0][2] != 'X')
            {
                board[0][2] = PLAYER_O;
                break;
            }
            if (userInput == '4' && board[1][0] != 'O' && board[1][0] != 'X')
            {
                board[1][0] = PLAYER_O;
                break;
            }
            if (userInput == '5' && board[1][1] != 'O' && board[1][1] != 'X')
            {
                board[1][1] = PLAYER_O;
                break;
            }
            if (userInput == '6' && board[1][2] != 'O' && board[1][2] != 'X')
            {
                board[1][2] = PLAYER_O;
                break;
            }
            if (userInput == '7' && board[2][0] != 'O' && board[2][0]  != 'X')
            {
                board[2][0] = PLAYER_O;
                break;
            }
            if (userInput == '8' && board[2][1] != 'O' && board[2][1] != 'X')
            {
                board[2][1] = PLAYER_O;
                break;
            }
            if (userInput == '9' && board[2][2] != 'O' && board[2][2] != 'X')
            {
                board[2][2] = PLAYER_O;
                break;
            }
            else
            {
                cout << endl;
                cout << "That square is not available or not a valid choice. Try Again." << endl;
                continue;
            }
    }
}

int main()
{
    int turn;
    //Main Loop: 9 turn then the game end
    for(int turn = 0; turn < 9;)
        {

//--------------------------------------------------------------------//
            //Player 1 (X)
            drawBoardX(chosenSquare); //passed nothing
            turn++;

            //end in 9 turn
            //player X always be the last player
            if(turn == 9)
                {
                    cout << endl;
        cout << "current board state:";
        cout << endl;
        cout << endl;
        //draw column for X
        for(int y = 0; y < 3; y++)
            {
            //draw row
            for(int x = 0; x < 3; x++)
                    {
                    if(x != 2)
                        {
                            cout << board[y][x];
                            cout << "|";
                        }
                    else //x = 2
                        {
                            cout << board[y][x];
                            cout << endl;
                            cout << endl;
                            cout << "-+-+-";
                            cout << endl;
                            cout << endl;
                        }

                    }
            }
                    cout << "Draw. Nobody Wins." << endl;
                    break;
                }
//--------------------------------------------------------------------//
            //Player 2 (O)
            drawBoardO(chosenSquare); //pass nothing
            turn++;

        }

        return turn;
    }





