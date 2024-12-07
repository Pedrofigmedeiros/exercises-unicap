#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 4;

void preencherMatriz(int matriz[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "Digite o valor para matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

int main(){
    int matriz[3][4];
    preencherMatriz(3, 4);

    return 0;
}