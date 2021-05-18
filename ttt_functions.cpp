#include <iostream>
#include <vector>
using namespace std;
//Function Definitions Here

// Print board function

void print_board(vector<char> map) {
    cout << endl;
    for (int i = 0; i < 3; i++) {
        cout << map[i] << " ";
    }
    cout << endl;
    for (int i = 3; i < 6; i++) {
        cout << map[i] << " ";
    }
    cout << endl;
    for (int i = 6; i < 9; i++) {
        cout << map[i] << " ";
    }
    cout << endl;
    cout << endl;
}

// Win check

int win_check(vector<char> r) { //1 x wins, 0 o wins, 2 continue
    if (r[0] == r[4] && r[4] == r[8]) {
        if (r[0] == 'X') {
            return 1;
        } else if (r[0] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[2] == r[4] && r[4] == r[6]) {
        if (r[2] == 'X') {
            return 1;
        } else if (r[2] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[0] == r[1] && r[1] == r[2]) {
        if (r[0] == 'X') {
            return 1;
        } else if (r[0] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[3] == r[4] && r[4] == r[5]) {
        if (r[3] == 'X') {
            return 1;
        } else if (r[3] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[6] == r[7] && r[7] == r[8]) {
        if (r[6] == 'X') {
            return 1;
        } else if (r[6] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[0] == r[3] && r[3] == r[6]) {
        if (r[0] == 'X') {
            return 1;
        } else if (r[0] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[1] == r[4] && r[4] == r[7]) {
        if (r[1] == 'X') {
            return 1;
        } else if (r[1] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else if (r[2] == r[5] && r[5] == r[8]) {
        if (r[2] == 'X') {
            return 1;
        } else if (r[2] == 'O') {
            return 0;
        } else {
            return 2;
        }
    } else {
        return 2;
    }         
}

void print_selection_board() {
    cout << "1 2 3\n4 5 6\n7 8 9\n";
}

// Update board

vector<char> change_board(int num, char letter, vector<char> r) {
    num--;
    if (r[num] == 'X') {
        cout << "Already taken, you lose a turn.\n";
    } else if (r[num] == 'O') {
        cout << "Already taken, you lose a turn\n";
    } else {   
        r[num] = letter;
    }
    return r;
}

// Declare winner
void winner(int num) {
    if (num == 1) {
        cout << "X wins!\n";
    } else if (num == 0) {
        cout << "O wins!\n";
    } else if (num == 2) {
        cout << "No winner, tie!\n";
    }
}