/* 30. Leia um número qualquer e verifique se ele é par ou ímpar. Se o número for par, escreva se é múltiplo
de 10; se for ímpar, escreva se é divisível por 5. */

#include <iostream>

using namespace std;

int main(){
	
	int num;
	
	cout << "Digite um numero: ";
	cin >> num;
	
	if(num%2==0){
		cout << "Seu numero e par";
			if(num%10==0){
				cout<<"Seu numero e multiplo de 10";
			}
	}else{
		cout<<"Seu numero e impar";
		
		if(num%5==0){
			cout<<"Seu numero e divisivel por 5";
		}
	}
	
}
