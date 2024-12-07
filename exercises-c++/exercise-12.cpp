#include <iostream>
using namespace std;

void preencherVetorA(int A[]) {
    for (int i = 0; i < 10; i++) {
        cout << "Digite o valor para A[" << i << "]: ";
        cin >> A[i];
    }
}

void preencherVetorB(int A[], int B[]) {
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            B[i] = A[i] / 2;
        } else {
            B[i] = A[i] * 3;
        }
    }
}

void exibirVetor(int vetor[]) {
    for (int i = 0; i < 10; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    int A[10], B[10];

    preencherVetorA(A);
    preencherVetorB(A, B);

    cout << "Vetor A: ";
    exibirVetor(A);

    cout << "Vetor B: ";
    exibirVetor(B);

    return 0;
}
