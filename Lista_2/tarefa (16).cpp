/*Elabore um algoritmo que leia a distância em km e a quantidade de litros de gasolina consumidos por
um carro em um percurso, calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela
abaixo:
CONSUMO (Km/l) MENSAGEM
Menor que 8 Venda o carro!
Entre 8 e 12 Econômico!
Maior que 12 Super econômico!*/

#include <iostream>

using namespace std;

int main(){
	
	float distancia, consumo=0, litros;
	
	cout << "Digite a distancia percorrida: ";
	cin >> distancia;
	
	cout << "Digite os litros consumidos: ";
	cin >> litros;
	
	consumo=distancia/litros;
	
	if(consumo<8){
		cout << "\n\tKm/l: " << consumo;
		cout << "\n\tVenda o carro";
	}else if(consumo>8 && consumo<12){
		cout << "\n\tKm/l: " << consumo;
		cout <<"\n\tEconomico!";
	}else{
		cout << "\n\tKm/l: " << consumo;
		cout << "\n\tSuper economico!";
	}
}
