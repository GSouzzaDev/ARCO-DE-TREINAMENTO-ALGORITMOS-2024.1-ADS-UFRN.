/*Leia um número inteiro N e um percentual qualquer e escreva qual o valor do percentual
aplicado ao número.*/

#include <iostream>
using namespace std;

int main(){
	int numero;
	float percentual, total;
	cout << "Digite um numero: ";
	cin >> numero;
	
	cout << "Digite o valor que voce deseja acrecentar ao numero: ";
	cin >> percentual;
	
	total=(percentual*numero)/100;
	
	cout << "o valor aplicado ao numero foi: " << total;
	
	
}
