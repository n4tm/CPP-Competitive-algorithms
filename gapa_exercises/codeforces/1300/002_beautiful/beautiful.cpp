#include <iostream>

using namespace std;

unsigned int mat[5][5];
unsigned int positions[4] = {0, 1, 2, 3};
unsigned int number_row = 0;
unsigned int number_column = 0;
const int CENTER_ROW = 2;
const int CENTER_COLUMN = 2;
void scan();
void swap_rows(int arg_position);
void swap_columns(int arg_position);
int moves();

int main () {
    scan();
    cout << moves() << '\n';

   return 0;
}

void scan() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> mat[i][j];
            if (mat[i][j] == 1) {
                number_row = i;
                number_column = j;
            }
        }
    }
}

void swap_rows(int arg_position) {
    int aux = 0;
    for (int i = 0; i < 5; i++) {
        if (i == arg_position) {
            for (int j = 0; j < 5; j++) {
                aux = mat[i][j];
                mat[i][j] = mat[i+1][j];
                mat[i+1][j] = aux;
                if (mat[i][j] == 1) {
                    number_row = i;
                } else if(mat[i+1][j] == 1) {
                    number_row = i+1;
                }
            }
            break;
        }
    }
}

void swap_columns(int arg_position) {
    int aux = 0;
    for (int i = 0; i < 5; i++) {
        if (i == arg_position) {
            for (int j = 0; j < 5; j++) {
                aux = mat[j][i];
                mat[j][i] = mat[j][i+1];
                mat[j][i+1] = aux;
                if (mat[j][i] == 1) {
                    number_column = i;
                } else if( mat[j][i+1] == 1) {
                    number_column = i+1;
                }
            }
            break;
        }
    }
}

int moves() {
    int moves_count = 0;
    while (number_column > CENTER_COLUMN) {
        swap_columns(positions[number_column-1]);
        moves_count++;
    }
    while (number_column < CENTER_COLUMN) {
        swap_columns(positions[number_column]);
        moves_count++;
    }
    while (number_row < CENTER_ROW) {
        swap_rows(positions[number_row]);
        moves_count++;
    }
    while (number_row > CENTER_ROW) {
        swap_rows(positions[number_row-1]);
        moves_count++;
    }

    return moves_count;
}