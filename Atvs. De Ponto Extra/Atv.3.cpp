/*algoritmo em C++ que leia um vetor de 20 elementos inteiros e um número inteiro, utilizando APENAS
UMA função, informe se o número existe no vetor E em qual posição se encontra, se existir.
*/
#include <iostream>
using namespace std;

void Numero(int vetor[], int tamanho, int numero);

int main() {
    const int tamanho = 20;
    int vetor[tamanho];
    int numero;

    cout << "\n\n\tDigite 20 elementos inteiros para o vetor:";
    for (int i = 0; i < tamanho; ++i) {
    	cout << "\n\n\tNumero da linha " << (i+1) << ": ";
        cin >> vetor[i];
    }

    cout << "\n\tDigite um numero inteiro para verificar se esta no vetor: ";
    cin >> numero;

    Numero(vetor, tamanho, numero);

}

void Numero(int vetor[], int tamanho, int numero) {
	
    bool encontrado = false;

    for (int i = 0; i < tamanho; ++i) {
        if (vetor[i] == numero) {
            cout << "\n\n\tO numero " << numero << " foi encontrado na posicao " << (i+1);
            encontrado = true;
        }
    }

    if(!encontrado) {
        cout << "\n\n\tO numero " << numero << " nao foi encontrado no vetor";
        cout << "\n\n\tBoa sorte na proxima professora, quero meus 0,5";
    }
}

