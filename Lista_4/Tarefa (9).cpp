/*Elabore um algoritmo que leia um vetor A de 10 elementos e construa um vetor P formado pelos índices dos
elementos pares de A. Exemplo: Se A = [1 3 6 7 8], seus alementos pares estão nos índices 2 e 4. Assim, P = [2 4]
*/

#include <iostream>
using namespace std;

int main() {
    int const tamanho = 10;
    int A[tamanho];
    int P[tamanho];
    int i;
    int u = 0;

    cout << "\n\tDigite os elementos do vetor A: ";

    for (i = 0; i < tamanho; i++) {
        cout << "Valor de indice " << i + 1 << ": ";
        cin >> A[i];
    }

    for (i = 0; i < tamanho; i++) {
        if (A[i] % 2 == 0) {
            P[u] = i;
            u++;
        }
    }

    cout << "\nindices dos elementos pares: ";
    for (i = 0; i < u; i++) {
        cout << P[i] << " ";
    }
    cout << endl;

    return 0;
}

