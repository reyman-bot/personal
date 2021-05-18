#include <iostream>

using namespace std;

void print_board(vector<char> map);
int win_check(vector<char> r);
void print_selection_board();
vector<char> change_board(int num, char letter, vector<char> r);
void winner(int num);