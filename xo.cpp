#include <iostream>
#include <string>
using namespace std;
void game(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "|";
        }
        cout << "\n------\n";
    }
    cout << "The Guide : \n";
    int c = 1;
    for (int j = 0; j < 3; j++)
    {
        for (int k = 0; k < 3; k++)
        {
            cout << c << "|";
            c++;
        }
        cout << "\n--------\n";
    }
}
void play(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << board[i][j] << "|";
        }
        cout << "\n------\n";
    }
}
int check(char board[3][3])// check if player 1 is going to win or not
{
    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++) // row
    {
        if (board[i][0] == board[i][1] and board[i][0] == 'X' and board[i][2] == ' ') // 1 and 2 are equal
        {

            return numbers[i][2];
        }
        else if (board[i][1] == board[i][2] and board[i][1] == 'X' and board[i][0] == ' ') // 2 and 3 are equal
        {

            return numbers[i][0];
        }
        else if (board[i][0] == board[i][2] and board[i][0] == 'X' and board[i][1] == ' ') // 1 and 3 are equal
        {
            return numbers[i][1];
        }
    }
    for (int j = 0; j < 3; j++) // column
    {
        if (board[0][j] == board[1][j] and board[0][j] == 'X' and board[2][j] == ' ')
        {
            return numbers[2][j];
        }
        else if (board[1][j] == board[2][j] and board[1][j] == 'X' and board[0][j] == ' ')
        {
            return numbers[0][j];
        }
        else if (board[0][j] == board[2][j] and board[0][j] == 'X' and board[1][j] == ' ')
        {
            return numbers[1][j];
        }
    }
    if (board[0][0] == board[1][1] and board[0][0] == 'X' and board[2][2] == ' ') // 1 and 5 (x)
    {
        return 9;
    }
    else if (board[0][2] == board[1][1] and board[0][2] == 'X' and board[2][0] == ' ') // 3 and 5 (x)
    {
        return 7;
    }
    else if (board[0][0] == board[2][2] and board[0][0] == 'X' and board[1][1] == ' ') // 1 and 9 (x)
    {
        return 5;
    }
    else if (board[0][2] == board[2][0] and board[0][2] == 'X' and board[1][1] == ' ') // 3 and 7(x)
    {
        return 5;
    }
    else if (board[2][2] == board[1][1] and board[2][2] == 'X' and board[0][0] == ' ') // 9 and 5(x)
    {
        return 1;
    }
    else if (board[0][2] == board[1][1] and board[1][1] == 'X' and board[0][2] == ' ') // 7 and 5 (x)
    {
        return 3;
    }
    return 0;
}
int check_computer(char board[3][3])
{
    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 3; i++) // row
    {
        if (board[i][0] == board[i][1] and board[i][0] == 'O' and board[i][2] == ' ')
        {

            return numbers[i][2];
        }
        else if (board[i][1] == board[i][2] and board[i][1] == 'O' and board[i][0] == ' ')
        {

            return numbers[i][0];
        }
        else if (board[i][0] == board[i][2] and board[i][0] == 'O' and board[i][1] == ' ')
        {
            return numbers[i][1];
        }
    }
    for (int j = 0; j < 3; j++) // column
    {
        if (board[0][j] == board[1][j] and board[0][j] == 'O' and board[2][j] == ' ')
        {
            return numbers[2][j];
        }
        else if (board[1][j] == board[2][j] and board[1][j] == 'O' and board[0][j] == ' ')
        {
            return numbers[0][j];
        }
        else if (board[0][j] == board[2][j] and board[0][j] == 'O' and board[1][j] == ' ')
        {
            return numbers[1][j];
        }
    }
    if (board[0][0] == board[1][1] and board[0][0] == 'O' and board[2][2] == ' ') // 1 and 5 (x)
    {
        return 9;
    }
    else if (board[0][2] == board[1][1] and board[0][2] == 'O' and board[2][0] == ' ') // 3 and 5 (x)
    {
        return 7;
    }
    else if (board[0][0] == board[2][2] and board[0][0] == 'O' and board[1][1] == ' ') // 1 and 9 (x)
    {
        return 5;
    }
    else if (board[0][2] == board[2][0] and board[0][2] == 'O' and board[1][1] == ' ') // 3 and 7(x)
    {
        return 5;
    }
    else if (board[2][2] == board[1][1] and board[2][2] == 'O' and board[0][0] == ' ') // 9 and 5(x)
    {
        return 1;
    }
    else if (board[0][2] == board[1][1] and board[1][1] == 'O' and board[0][2] == ' ') // 7 and 5 (x)
    {
        return 3;
    }
    return 0;
}
bool win1(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] and board[i][0] == board[i][2] and board[i][0] == 'X') // row
        {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] and board[0][i] == board[2][i] and board[0][i] == 'X') // column
        {
            return 1;
        }
    }
    if (board[0][0] == board[1][1] and board[0][0] == board[2][2] and board[0][0] == 'X') // x
    {
        return 1;
    }
    else if (board[0][2] == board[1][1] and board[0][2] == board[2][0] and board[0][2] == 'X') // x
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
bool win2(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] and board[i][0] == board[i][2] and board[i][0] == 'O') // row
        {
            return 1;
        }
    }
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] and board[0][i] == board[2][i] and board[0][i] == 'O') // column
        {
            return 1;
        }
    }
    if (board[0][0] == board[1][1] and board[0][0] == board[2][2] and board[0][0] == 'O') // x
    {
        return 1;
    }
    else if (board[0][2] == board[1][1] and board[0][2] == board[2][0] and board[0][2] == 'O') // x
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    char board[3][3] = {{' ', ' ', ' '}, {' ', ' ', ' '}, {' ', ' ', ' '}}; // 2D
    game(board);
    srand(time(0));
    int x, y;
    string arr, z;
    bool flag = 1;
    int i = 0;
    cout << "Choose\n1 (1VS1) \n2 (1VSComputer)\n";
    cin >> z;
    if (z == "1")
    {
        while (flag)
        {
            bool ans = 1;
            if (i % 2 == 0) // player 1
            {
                cout << "Your play (Player 1) : ";
                cin >> z;
                for (int k = 0; k < arr.size(); k++)
                {
                    if (arr[k] == z[0])
                    {
                        ans = 0;
                    }
                }
                if ((z == "1" or z == "2" or z == "3" or z == "4" or z == "5" or z == "6" or z == "7" or z == "8" or z == "9") and ans == 1) // check if input right
                {
                    // Check makan el le3ba x (row) , y (column)

                    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, m = stoi(z);
                    for (x = 0; x < 3; x++)
                    {
                        for (y = 0; y < 3; y++)
                        {
                            if (numbers[x][y] == m)
                            {
                                arr += z;
                                board[x][y] = {'X'};
                                play(board);
                                i++;
                            }
                        }
                    }
                    if (win1(board))
                    {
                        cout << "Player 1 Win ... Thank you for playing\n";
                        flag = 0;
                        break;
                    }
                }

                else
                {
                    cout << "Error... Type again\n";
                }
            }
            else // player 2
            {
                cout << "Your play (Player 2) : ";
                cin >> z;
                for (int k = 0; k < arr.size(); k++)
                {
                    if (arr[k] == z[0])
                    {
                        ans = 0;
                    }
                }
                if ((z == "1" or z == "2" or z == "3" or z == "4" or z == "5" or z == "6" or z == "7" or z == "8" or z == "9") and ans == 1) // check if input right
                {
                    // Check makan el le3ba x (row) , y (column)

                    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, m = stoi(z);
                    for (x = 0; x < 3; x++)
                    {
                        for (y = 0; y < 3; y++)
                        {
                            if (numbers[x][y] == m)
                            {
                                arr += z;
                                board[x][y] = {'O'};
                                play(board);
                                i++;
                            }
                        }
                    }
                    if (win2(board))
                    {
                        cout << "Player 2 Win ... Thank you for playing\n";
                        flag = 0;
                        break;
                    }
                }
                else
                {
                    cout << "Error... Type again\n";
                }
            }
            if (i == 9)
            {
                cout << "Draw\n";
                flag = 0;
            }
        }
    }
    else if (z == "2")
    {
        while (flag)
        {
            bool ans = 1;
            if (i % 2 == 1) // player 1
            {
                cout << "Your play (Player 1) : ";
                cin >> z;
                for (int k = 0; k < arr.size(); k++)
                {
                    if (arr[k] == z[0])
                    {
                        ans = 0;
                    }
                }
                if ((z == "1" or z == "2" or z == "3" or z == "4" or z == "5" or z == "6" or z == "7" or z == "8" or z == "9") and ans == 1) // check if input right
                {
                    // Check makan el le3ba x (row) , y (column)

                    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9}, m = stoi(z);
                    for (x = 0; x < 3; x++)
                    {
                        for (y = 0; y < 3; y++)
                        {
                            if (numbers[x][y] == m)
                            {
                                arr += z;
                                board[x][y] = {'X'};
                                play(board);
                                i++;
                            }
                        }
                    }
                    if (win1(board))
                    {
                        cout << "Player 1 Win ... Thank you for playing\n";
                        flag = 0;
                        break;
                    }
                }

                else
                {
                    cout << "Error... Type again\n";
                }
            }
            else // computer
            {
                if (check_computer(board) != 0) // computer search for winning
                {
                    int the_play = 1;
                    for (int k = 0; k < 3; k++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            if (the_play == check_computer(board))
                            {
                                board[k][j] = {'O'};

                                string s = to_string(the_play);
                                cout << "Computer move\n";
                                play(board);
                            }
                            the_play++;
                        }
                    }
                    cout << "Computer Win ... Thank you for playing\n";
                    flag = 0;
                    break;
                }
                else if (check(board) != 0)
                {

                    int the_play = 1;
                    for (int k = 0; k < 3; k++)
                    {
                        for (int j = 0; j < 3; j++)
                        {
                            if (the_play == check(board))
                            {
                                board[k][j] = {'O'};
                                string s = to_string(the_play);
                                arr += s;
                                cout << "Computer move\n";
                                play(board);
                                i++;
                                j = 3;
                                k = 3;
                            }
                            the_play++;
                        }
                    }

                    if (win2(board))
                    {
                        cout << "Computer Win ... Thank you for playing\n";
                        flag = 0;
                        break;
                    }
                }
                else // mafe4 play ne2fel 3aleha
                {
                    x = rand() % 3; // any number modules 3 equal 0 or 1 or 2
                    y = rand() % 3;
                    int numbers[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

                    bool ans = 1;
                    string number_converted = to_string(numbers[x][y]);
                    for (int search = 0; search < arr.size(); search++)
                    {
                        if (arr[search] == number_converted[0])
                        {
                            ans = 0;
                            break;
                        }
                    }
                    if (ans != 0)
                    {
                        cout << "Computer move\n";
                        arr += number_converted;
                        board[x][y] = {'O'};
                        play(board);
                        i++;
                        if (win2(board))
                        {
                            cout << "Computer Win ... Thank you for playing\n";
                            flag = 0;
                            break;
                        }
                    }
                }
            }
            if (i == 9)
            {
                cout << "Draw\n";
                flag = 0;
            }
        }
    }

    else
    {
        cout << "Invalid Try again\n";
    }
}
