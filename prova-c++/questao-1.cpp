#include <iostream>
using namespace std;

float metrosParaQuilometros(float valor_m){
  float valor_km;
  valor_km = valor_m / 1000;
  return (valor_km);
}

float metrosParaHectometros(float valor_m){
  float valor_hm;
  valor_hm = valor_m / 100;
  return (valor_hm);
}

float metrosParaDecametros(float valor_m){
  float valor_dm;
  valor_dm = valor_m / 10;
  return (valor_dm);
}

float metrosParaDecimetros(float valor_m){
  float valor_dcm;
  valor_dcm = valor_m * 10;
  return (valor_dcm);
}

float metrosParaCentimetros(float valor_m){
  float valor_cm;
  valor_cm = valor_m * 100;
  return (valor_cm);
}

float metrosParaMilimmetros(float valor_m){
  float valor_mm;
  valor_mm = valor_m * 1000;
  return (valor_mm);
}

int main(){
    float resultado, valor_metros;
    int escolha;

    do{
        cout << "Escolha a conversão que deseja realizar: "  << endl;
        cout << "1 - Converter para km: " << endl;
        cout << "2 - Converter para hm: " << endl;
        cout << "3 - Converter para dm: " << endl;
        cout << "4 - Converter para dcm: " << endl;
        cout << "5 - Converter para cm: " << endl;
        cout << "6 - Converter para mm: " << endl;
        cout << "0 - Finalizar o programa: " << endl;
        cin >> escolha;

        switch (escolha){
        case 1:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaQuilometros(valor_metros);
            cout << "O valor em km é: " << resultado << endl;
            cout << endl;
            break;

        case 2:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaHectometros(valor_metros);
            cout << "O valor em hm é: " << resultado << endl;
            cout << endl;
            break;

        case 3:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaDecametros(valor_metros);
            cout << "O valor em dam é: " << resultado << endl;
            cout << endl;
            break;

        case 4:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaDecimetros(valor_metros);
            cout << "O valor em dcm é: " << resultado << endl;
            cout << endl;
            break;

        case 5:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaCentimetros(valor_metros);
            cout << "O valor em cm é: " << resultado << endl;
            cout << endl;
            break;

        case 6:
            cout << "Informe um valor em metros: ";
            cin >> valor_metros;
            resultado = metrosParaMilimmetros(valor_metros);
            cout << "O valor em mm é: " << resultado << endl;
            cout << endl;
            break;
        
        default:
        cout << "Opção inválida, tente novamente.\n";
        }

        cout << endl;
    } while (escolha != 0);

    return 0;
}