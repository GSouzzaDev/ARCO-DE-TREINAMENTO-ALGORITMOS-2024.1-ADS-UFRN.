/*Calcule e escreva a quantidade de dinheiro gasta por um fumante a partir da leitura das
informações número de anos que ele fuma, quantidade] de cigarros fumados por dia e preço de
uma carteira.*/

#include <iostream>

using namespace std;

int main(){
	int anos, cigarros, preco, total;
	
	    cout << "Digite a quantos anos voce fuma: ";
	cin >> anos;
	
		cout << "Digite quantos cigarros voce fuma por dia: ";
	cin >> cigarros;
	
		cout << "Digite quanto voce paga por uma carteira de cigarros: ";
	cin >> preco;
	
	total=anos*cigarros*preco;
	
	cout << "Voce fuma " << total << " cigarros por dia";
	
	return 0;
}
