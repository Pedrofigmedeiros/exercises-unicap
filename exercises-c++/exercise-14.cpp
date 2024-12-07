#include <iostream>
using namespace std;

void exibirResultados(int votos[], int totalVotos) {
    string candidatos[9] = {"Branco", "João", "Maria", "Pedro", "Luís", "Ana", "Luiza", "Silvia", "André"};
    for (int i = 0; i < 9; i++) {
        double percentual = (votos[i] * 100.0) / totalVotos;
        cout << candidatos[i] << ": " << votos[i] << " votos (" << percentual << "%)" << endl;
    }
}

int main() {
    int votos[9] = {0};
    int voto;
    char resposta;
    int totalVotos = 0;

    do {
        cout << "Digite o voto (0 - Branco, 1 - João, 2 - Maria, 3 - Pedro, 4 - Luís, 5 - Ana, 6 - Luiza, 7 - Silvia, 8 - André): ";
        cin >> voto;

        if (voto >= 0 && voto <= 8) {
            votos[voto]++;
        } else {
            votos[0]++;
        }

        totalVotos++;

        cout << "Outro eleitor deseja votar? (s/n): ";
        cin >> resposta;
        while (resposta != 's' && resposta != 'S' && resposta != 'n' && resposta != 'N') {
            cout << "Resposta inválida. Por favor, digite 's' para sim ou 'n' para não: ";
            cin >> resposta;
        }

    } while (resposta == 's' || resposta == 'S');

    cout << "\nResultados da eleição:\n";
    exibirResultados(votos, totalVotos);

    return 0;
}
