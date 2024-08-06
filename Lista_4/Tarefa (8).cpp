/*Elabore um algoritmo que leia dois vetores, A (20 elementos inteiros e B (20 elementos inteiros), e escreva
um terceiro vetor C contendo todos os elementos comuns aos dois vetores A e B
*/

#include <iostream>
using namespace std;

int main(){
	const int tamanho=5;
	int A[tamanho];
	int B[tamanho];
	int C[tamanho];
	
	cout << "\n\n\tDigite o vetor A: ";
	
	for(int i=0; i<tamanho; i++){
		cout << "\n\tDigite o elemento " << i+1 << ": ";
		cin >> A[i];
	}
	
	cout << "\n\n\tDigite o vetor B: ";
	
	for(int i=0; i<tamanho; i++){
		cout << "\n\tDigite o elemento " << i+1 << ": ";
		cin >> B[i];
	}
	
	for(int i=0; i<tamanho; i++){
		if(A[i]==B[i]){
			C[i]=A[i];
		} else{
			C[i]=0;
		}
	}
	
	cout << "\n\n\tElementos comuns entre A e B: ";
	
	for(int i=0; i<tamanho; i++){
		cout << C[i];
		cout << " ";
		}
	cout << "\n\n0=Nada";
}
