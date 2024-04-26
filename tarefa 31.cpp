/* 31. Elabore um algoritmo que leia o código (inteiro) e a idade de 100 pessoas e escreva ao final o código da
pessoa mais velha e a idade da pessoa mais nova. */

#include <iostream>

using namespace std;

int main(){
	int cod, idade, maioridade=0, menoridade=10000;
	
	
	for(int i=0; i<3; i++){
	
	cout << "Digite seu codigo: ";
	cin >> cod;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
		if(idade>maioridade){
			maioridade=cod;
		}
		if(idade<menoridade){
			menoridade=idade;
		}
	}
	
	cout << "\n\tO codigo da pessoa mais velha: " << maioridade;
	cout << "\n\tA idade da pessoa mais nova: " << menoridade;
	
}
