/*Elabore um algoritmo que leia um vetor A de 20 posições. Em seguida, no mesmo vetor A, trocar o primeiro
elemento com o último, o segundo com o penúltimo, o terceiro com o antepenúltimo, e assim 
secessivamente. Ao final, escreva o vetor A modificado.
*/

#include <iostream>
using namespace std;

int main(){
	const int tamanho = 6;
	int vetor[tamanho];
	int aux[tamanho];
	int i=0;
	int u=5;
	 
	for(i=0; i<tamanho; i++){
        cout << "\n\tDigite o vetor " << (i+1) << ": ";
        cin >> vetor[i];
	}
	
	for(i=0; i<tamanho; i++){
		aux[u]=vetor[i];
		u--;
	}
	
	cout << "\n\tVetor modificado: "; 
	
	for(i=0; i<tamanho; i++){
        vetor[i]=aux[i]; 
        cout << "\n\tVetor " << (i+1) << ": " << vetor[i];
	}
	
}
