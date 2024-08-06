/*Sejam A e B dois vetore contendo 10 elementos inteiros. Elabore um algoritmo que:
a. Leia A e B.
b. Calcule a soma dos elementos de A.
c. Crie o vetor C contendo a soma dos elementos de mesma posição dos vetores A e B.
d. Calcule quantos elementos de A são maiores que a soma dos elementos de B.
*/

#include <iostream>
using namespace std;

int main() {
 int const tamanho = 10;
    int A[tamanho];
    int B[tamanho];
    int soma;
    int C[tamanho];
    int maior=0;
    int i;

    cout << "\n\tDigite os elementos do vetor A: ";

    for (i = 0; i < tamanho; i++) {
        cout << "\n\tValor de indice " << i + 1 << ": ";
        cin >> A[i];
    }
    
    for (i = 0; i < tamanho; i++) {
        cout << "\n\tValor de indice " << i + 1 << ": ";
        cin >> B[i];
    }
    
    for (i = 0; i < tamanho; i++) {
        soma=soma+A[i];
    }
    
    cout << "\n\tA soma do todos os elementos de A: " << soma;
    
    cout << "\n\tA soma dos elementos de A e B: ";
    for (i = 0; i < tamanho; i++) {
        C[i]=A[i]+B[i];
        cout << C[i] << " ";
    }
    
    for (i = 0; i < tamanho; i++) {
       if(A[i]>B[i]){
       		maior++;
	   }
	}
	
	cout << "\n\tO vetor A tem " << maior << " Elementos maiores do que em B";
}
    
    
