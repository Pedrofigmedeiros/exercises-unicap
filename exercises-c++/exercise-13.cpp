#include <iostream>
using namespace std;

void preencherVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para o vetor na posição " << i + 1 << ": ";
        cin >> vetor[i];
    }
}

int somarVetor(int vetor[], int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    const int tamanho = 100;
    int X[tamanho], Y[tamanho];

    cout << "Preencha o vetor X:" << endl;
    preencherVetor(X, tamanho);
    
    cout << "Preencha o vetor Y:" << endl;
    preencherVetor(Y, tamanho);

    int somaX = somarVetor(X, tamanho);
    int somaY = somarVetor(Y, tamanho);

    cout << "A soma dos elementos do vetor X é: " << somaX << endl;
    cout << "A soma dos elementos do vetor Y é: " << somaY << endl;

    return 0;
}
