#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int tamanho = 10;
const int motos = 5;
const int bombas = 10;

void preencherTabuleiro(int tabuleiro[tamanho][tamanho]) {
    srand(time(0));
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    int colocadas = 0;
    while (colocadas < motos) {
        int linha = rand() % tamanho;
        int coluna = rand() % tamanho;
        if (tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = 2;
            colocadas++;
        }
    }

    colocadas = 0;
    while (colocadas < bombas) {
        int linha = rand() % tamanho;
        int coluna = rand() % tamanho;
        if (tabuleiro[linha][coluna] == 0) {
            tabuleiro[linha][coluna] = 1;
            colocadas++;
        }
    }
}

void jogarOJogo(int tabuleiro[tamanho][tamanho]) {
    int vidas = 5;
    int chances = 10;
    int encontradas = 0;

    while (chances > 0 && vidas > 0 && encontradas < motos) {
        int linha, coluna;
        cout << "Informe uma linha (0 a " << tamanho - 1 << "): ";
        cin >> linha;
        cout << "Informe uma coluna (0 a " << tamanho - 1 << "): ";
        cin >> coluna;

        if (linha < 0 || linha >= tamanho || coluna < 0 || coluna >= tamanho) {
            cout << "Posição inválida! Tente novamente." << endl;
            continue;
        }

        if (tabuleiro[linha][coluna] == 2) {
            cout << "Você encontrou uma moto!" << endl;
            encontradas++;
            tabuleiro[linha][coluna] = 0;
        } else if (tabuleiro[linha][coluna] == 1) {
            cout << "Você encontrou uma bomba! Perdeu uma vida." << endl;
            vidas--;
            tabuleiro[linha][coluna] = 0;
        } else {
            cout << "Nada aqui!" << endl;
        }

        chances--;
        cout << "Chances restantes: " << chances << ", Vidas restantes: " << vidas << endl;
    }

    if (encontradas == motos) {
        cout << "Parabéns! Você encontrou todas as motos e venceu o jogo!" << endl;
    } else if (vidas == 0) {
        cout << "Você perdeu todas as vidas! Fim de jogo." << endl;
    } else {
        cout << "Você não encontrou todas as motos. Fim de jogo." << endl;
    }
}

int main() {
    int tabuleiro[tamanho][tamanho];
    preencherTabuleiro(tabuleiro);
    jogarOJogo(tabuleiro);

    return 0;
}
