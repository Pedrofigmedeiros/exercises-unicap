#include <iostream>
#include <string>
using namespace std;

const int num_questoes = 100;
const int num_alunos = 50;

void preencherGabarito(char gabarito[num_questoes]) {
    for (int i = 0; i < num_questoes; i++) {
        do {
            cout << "digite a resposta correta para a questão " << i + 1 << " (a, b, c, d, e): ";
            cin >> gabarito[i];
        } while (gabarito[i] < 'a' || gabarito[i] > 'e');
    }
}

void preencherRespostas(char respostas[num_alunos][num_questoes], string nomes[num_alunos]) {
    for (int i = 0; i < num_alunos; i++) {
        cout << "digite o nome do aluno " << i + 1 << ": ";
        cin >> nomes[i];
        for (int j = 0; j < num_questoes; j++) {
            do {
                cout << "resposta do aluno " << nomes[i] << " para a questão " << j + 1 << " (a, b, c, d, e): ";
                cin >> respostas[i][j];
            } while (respostas[i][j] < 'a' || respostas[i][j] > 'e');
        }
    }
}

void calcularAcertos(char gabarito[num_questoes], char respostas[num_alunos][num_questoes], int acertos[num_alunos]) {
    for (int i = 0; i < num_alunos; i++) {
        acertos[i] = 0;
        for (int j = 0; j < num_questoes; j++) {
            if (respostas[i][j] == gabarito[j]) {
                acertos[i]++;
            }
        }
    }
}

void exibirResultados(string nomes[num_alunos], int acertos[num_alunos]) {
    for (int i = 0; i < num_alunos; i++) {
        string situacao = acertos[i] >= 70 ? "aprovado" : "reprovado";
        cout << "o aluno " << nomes[i] << " acertou " << acertos[i] << " questões e está " << situacao << "." << endl;
    }
}

int main() {
    char gabarito[num_questoes];
    char respostas[num_alunos][num_questoes];
    int acertos[num_alunos];
    string nomes[num_alunos];

    cout << "preencha o gabarito do exame:" << endl;
    preencherGabarito(gabarito);

    cout << "preencha as respostas dos alunos:" << endl;
    preencherRespostas(respostas, nomes);

    calcularAcertos(gabarito, respostas, acertos);

    cout << "\nresultados dos alunos:" << endl;
    exibirResultados(nomes, acertos);

    return 0;
}
