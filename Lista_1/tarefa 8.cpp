/*Escreva o valor em reais (R$) de um valor lido em dólares (US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares que o usuário deseja converter.*/

#include <iostream>

using namespace std;

int main(){
	int reais, dolar, cotacao;
	
	cout <<"!CONVERTA SEUS DOLARES EM REAIS!\n";
	
    cout << "Digite o valor que deseja converter: ";
	cin >> dolar;
	
	cout << "Digite a cotação do dolar: ";
	cin >> cotacao;
	
	reais=dolar/cotacao;
	
	cout << "O valor em real é: " << reais;
	
	return 0;
} 
