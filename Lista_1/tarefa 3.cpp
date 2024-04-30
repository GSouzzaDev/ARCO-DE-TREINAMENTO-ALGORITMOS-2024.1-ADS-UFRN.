/*Leia o valor de uma compra nas Lojas Sua Melhor Compra e mostre o valor das prestações de
acordo com a quantidade de parcelas desejada pelo usuário. A loja está vendendo seus produtos
a vista ou parcelado em até 10 vezes sem juros.*/

#include <iostream>

using namespace std;

int main(){
	int parcelas, valor, total;
	
    cout << "seja bem vindo as Lojas Sua Melhor Compra\n";
	
	cout << "digite o valor da sua compra: ";
	cin >> valor;
	
	cout << "(parcelamos em ate 10x sem juros) Digite em quantas vezes deseja parcelar: ";
	cin >> parcelas;
	
	total=valor/parcelas;
	
	cout << "O valor de cada parcela sera: " << total << " reais";
	
} 
