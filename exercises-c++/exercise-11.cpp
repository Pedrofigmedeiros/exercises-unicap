#include <iostream>
using namespace std;

void preencherVetor(int numbers[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << "Digite o valor para o vetor na posição " << i << ": ";
        cin >> numbers[i];
    }
}

void exibirVetor(int numbers[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << numbers[i] << " ";
    }
    cout << endl;
}

void somarVetores(int a[], int b[], int c[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        c[i] = a[i] + b[i];
    }
}

int main(){
    int tamanho = 5;
    int a[tamanho], b[tamanho], c[tamanho];

    cout << "Preencha o vetor A:" << endl;
    preencherVetor(a, tamanho);

    cout << "Preencha o vetor B:" << endl;
    preencherVetor(b, tamanho);

    somarVetores(a, b, c, tamanho);

    cout << "Vetor A: ";
    exibirVetor(a, tamanho);

    cout << "Vetor B: ";
    exibirVetor(b, tamanho);

    cout << "Vetor C: ";
    exibirVetor(c, tamanho);
    
}