/*Num determinado Estado, para transferências de veículos o DETRAN cobra uma taxa de 1% para carros
fabricados antes de 1990 e uma taxa de 1.5% para os fabricados a partir de 1990, taxa esta que incide
sobre o preço do carro. Elabore um algoritmo que leia o ano e o preço do carro, calcule e escreva o
imposto a ser pago. */

#include <iostream>
using namespace std;

int main(){
	int preco, ano, valor;
	
	cout << "\t\nVamos calcular o imposto a ser pago pelo seu carro!\n";
	cout << "Digite o valor do seu carro: ";
	cin >> preco;
	
	cout << "Digite o ano do seu carro: ";
	cin >> ano;
	
	if(ano<=1990){
		valor=preco*0.01;
		cout << "O imposto a ser pago e " << valor;
	}else{
			valor=preco*0.015;
		cout << "O imposto a ser pago e " << valor;
	}
	
	return 0;
}
