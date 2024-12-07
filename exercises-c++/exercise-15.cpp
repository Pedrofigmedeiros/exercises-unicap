#include <iostream>
using namespace std;

const int rows = 3;
const int cols = 4;

void preencherMatriz(int matriz[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "Digite o valor para matriz[" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }
}

void somarMatrizes(double matrizA[rows][cols], double matrizB[rows][cols], double matrizC[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void exibirMatriz(double matriz[rows][cols]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    double matrizA[rows][cols], matrizB[rows][cols], matrizC[rows][cols];

    cout << "Preencha a matriz A:" << endl;
    preencherMatriz(matrizA);
    cout << "Preencha a matriz B:" << endl;
    preencherMatriz(matrizB);

    somarMatrizes(matrizA, matrizB, matrizC);

    cout << "\nMatriz A:" << endl;
    exibirMatriz(matrizA);
    cout << "\nMatriz B:" << endl;
    exibirMatriz(matrizB);
    cout << "\nMatriz C (soma de A e B):" << endl;
    exibirMatriz(matrizC);

    return 0;
}
