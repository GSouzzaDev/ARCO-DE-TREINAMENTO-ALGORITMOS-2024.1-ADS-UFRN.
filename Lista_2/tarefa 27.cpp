/* 27. Leia 3 números inteiros e escreva uma das seguintes mensagens:
• Todos os números são iguais;
• Todos os números são diferentes;
• Apenas dois números são iguais. */

#include <iostream>

using namespace std;

int main(){
	
	int n1, n2, n3;
	
	cout << "Digite 3 numeros: ";
	cin >> n1 >> n2 >> n3;
	
	if(n1==n2 && n2==n3){
		cout << "Todos os numeros sao iguais";
	}else if(n1!=n2 && n2!=n3){
		cout << "Todos os numeros são diferentes";
	}else{
		cout << "Apenas 2 sao numeros iguais";
	}
}
