#include <iostream>
#include <vector>
#include "ttt_functions.h"

using namespace std;

int main() {

    char blank = '_';
    char x = 'X';
    char o = 'O';
    int player_x, player_o;
    vector<char> map(9);
    for (int i = 0; i < 9; i++) {
        map[i] = blank;
    }


    for (int i = 0; i < 2; i++) {
        print_board(map);
        cout << "X, select a location:\n";
        print_selection_board();
        cin >> player_x;
        map = change_board(player_x, x, map);

        print_board(map);
        cout << "O, select a location:\n";
        print_selection_board();
        cin >> player_o;
        map = change_board(player_o, o, map);
    }

    int j = 0;
    while (j < 3) {
        // First we check if someone won, and ends the loop and program
        if (win_check(map) == 0 || win_check(map) == 1) { 
            print_board(map);
            winner(win_check(map));
            system("pause");
            return 0;
        }
        print_board(map);
        cout << "X, select a location:\n";
        print_selection_board();
        cin >> player_x;
        map = change_board(player_x, x, map);

        if (win_check(map) == 0 || win_check(map) == 1) {
            print_board(map);
            winner(win_check(map));
            system("pause");
            return 0;
        }

        print_board(map);
        cout << "O, select a location:\n";
        print_selection_board();
        cin >> player_o;
        map = change_board(player_o, o, map);

        j++;
    }
    winner(win_check(map));
    system("pause");
    return 0;
}