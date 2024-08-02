/* 29. Leia a idade de uma pessoa e escreva se ela já tem idade para tirar carteira de habilitação (18 anos
completos) ou não. Se não tiver idade, escreva também quantos anos faltam para que possa tirar a
carteira.*/

#include <iostream>

using namespace std;

int main(){
	
	int idade;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	if(idade>=18){
		cout<< "Voce ja tem idade para tirar a carteira de motorista";
	}else{
		idade=18-idade;
		cout<<"Faltam " << idade << " anos para voce conseguir tirar a carteira";
	}
} 
