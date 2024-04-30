/*Leia dois valores inteiros nas variáveis Val1 e Val2, troque os seus conteúdos e escreva o
resultado. Exemplo: Se o valor lido foi 10 para a variável Val1 e 11 para a variável Val2, depois
da troca o algoritmo terá que escreva Val1 = 11 e Val2 = 10.*/

#include <iostream>

using namespace std;

int main(){
	int Val1, Val2, troca;
	
	cout << "Digite dois valores para trocar:\n ";
	cin >> Val1 >> Val2;
	
	troca=Val1;
	Val1=Val2;
	Val2=troca;
	
	cout << "Valores invertidos: " << Val1 <<" e " << Val2;
	
	return 0;
}
