/* 31. Crie um algoritmo que ajude o DETRAN a saber o total de recursos que foram arrecadados com a
aplicação de multas de trânsito. O algoritmo deve ler as seguintes informações para cada um dos N
motoristas:
- O número da carteira de motorista (inteiro);
- Número de multas;
- O valor de cada uma das multas.
Deve ser impresso o valor da dívida de cada motorista e ao final da leitura o total de recursos arrecadados
(somatório de todas as multas). O algoritmo deverá imprimir também o número da carteira do motorista
que obteve o maior número de multas. */

#include <iostream>
using namespace std;

int main() {
    int numCarteira, numMultas, motoristas;
    float multa, totalArrecadado = 0, maiorNumMultas = 0;
    int numCarteiraMaiorMultas = 0;

    cout << "Digite o número de motoristas: ";
    cin >> motoristas;

    for (int i = 0; i < motoristas; i++) {
        cout << "Digite o número da carteira do motorista: ";
        cin >> numCarteira;

        cout << "Digite o número de multas: ";
        cin >> numMultas;

        float totalMultasMotorista = 0;

        for (int j = 0; j < numMultas; j++) {
            cout << "Digite o valor da multa " << j + 1 << ": ";
            cin >> multa;
            totalMultasMotorista += multa;
        }

        cout << "Dívida do motorista (carteira " << numCarteira << "): " << totalMultasMotorista << endl;

        totalArrecadado += totalMultasMotorista;

        if (numMultas > maiorNumMultas) {
            maiorNumMultas = numMultas;
            numCarteiraMaiorMultas = numCarteira;
        }
    }

    cout << "Total arrecadado: " << totalArrecadado << endl;
    cout << "Número da carteira do motorista com mais multas: " << numCarteiraMaiorMultas << endl;

    return 0;
}


