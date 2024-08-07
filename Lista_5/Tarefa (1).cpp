/*Elabore um algoritmo que leia uma matriz M(6,6) e um valor A inteiro e multiplique a matriz M pelo valor A
inserindo os resultados em um vetor de V(36). Ao final, escreva o vetor V.
*/

#include <iostream>
using namespace std; 

int main(){
	int const tamanhoM=6;
	int const tamanhoV=36;
	int M[tamanhoM][tamanhoM];
	int V[tamanhoV];
	int mult;
	int i;
	int u;
	int a=0;
	
	cout << "\n\n\tDigite os valores da matriz M: ";
	
	for(i=0; i<tamanhoM; i++){
		for(u=0; u<tamanhoM; u++){
			cin >> M[i][u];	
		}	
	}
	
	cout << "\n\tVetor M:\n ";
	for(i=0; i<tamanhoM; i++){
		for(u=0; u<tamanhoM; u++){
			cout << M[i][u] << " ";
		}
	cout << "\n";		
	}
	cout << "\n\t--------------------------------";
	
	cout << "\n\tDigite por quanto deseja multiplicar: ";
	cin >> mult;
	
	for(i=0; i<tamanhoM; i++){
		for(u=0; u<tamanhoM; u++){
		    V[a] = M[i][i] * mult;
		    cout << V[a] << " ";
			a++;	
		}	
	}
}
