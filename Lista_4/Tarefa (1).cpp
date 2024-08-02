/*Elabore um algoritmo que leia 20 elementos de  um vetor de inteiros e, em seguida um valor de código.
Se o código for 1, mostrar o vetor na ordem direta(do primeiro até o úiltimo, se o código for 2,
mostrar o vetor na ordem inversa(do ultimo até o primeiro). */


#include <iostream>

using namespace std;

int main(){
	
	int u=0;
	int numero[20], ordem;
	
	cout << "\n\tDigite 20 posicoes numericas seguintes";
	
	for(int i=0; i<20; i++){
	cout << "\n\tDigite a posicao " << i << " :";
	cin >> numero[i];
	}
	
	cout << "\n\tDigite o codigo para acessar os numeros na ordem que deseja";
	cout << "\n\t1-Ordem direta, 2-Ordem inversa: ";
	cin >> ordem;
	
	switch (ordem){
		case 1:
			for(u=0; u<20; u++){
				cout << numero[u] << " ";
			}
		break;
		
		case 2:
			for(u=19; u>=0; u--){
			cout << numero[u] << " ";
			}
		break;
		default:
			cout << "Escolha invalida";
	}
}
