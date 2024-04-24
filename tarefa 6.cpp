/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do
distribuidor e dos impostos, ambos aplicados ao custo de fábrica. Supondo que a percentagem
do distribuidor seja de 28% e os impostos de 45%, escreva um algoritmo que leia o custo de
fábrica de um carro e escreva o custo ao consumidor*/

#include <iostream>
using namespace std;

int main(){
	int custo, distribuidor, impostos, total;
	
	cout << "Digite o custo de fabrica do seu novo carro: ";
	cin >> custo;
	
	distribuidor=(custo*28)/100;
	impostos=(custo*45)/100;
	
	total=distribuidor+impostos+custo;
	
	cout << "O custo ao consumidor final e: " << total;
	
	return 0;
	
}
