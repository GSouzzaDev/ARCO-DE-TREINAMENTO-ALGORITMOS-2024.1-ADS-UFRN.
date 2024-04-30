/*Calcule o peso ideal de uma pessoa. Dados de entrada: altura e gênero (“m”-masculino ou “f”-feminino).
Utilize as seguintes fórmulas para cálculo do peso ideal:
• Masculino = (72,7 x altura) - 58
• Feminino = (62,1 x altura) - 44,7*/

#include <iostream>
using namespace std;

int main(){
	int altura, ideal;
	char x;
	
	cout << "\tVamos calcular seu peso ideal!\n";
	
	cout << "Digite sua altura em Cm: ";
	cin >> altura;
	
	cout << "Digite seu genero(m-masculino, f-feminino)\n";
	cin >> x;
	
	if( x=='m' || x=='M' ){
		ideal=72,7 * altura;
		cout << "Seu peso ideal e: " << ideal;
	}else if(x=='f' || x=='F'){
		ideal=62,1 * altura;
		cout << "Seu peso ideal e: " << ideal;
	}else{
		cout << "Digite corretamente o seu genero!";
	}
	
	return 0;
}
