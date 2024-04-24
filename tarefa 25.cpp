/* 25. Elabore um algoritmo que leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar. As condições para aposentadoria são:
• Ter pelo menos 65 anos;
• Ou ter trabalhado pelo menos 30 anos;
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.*/

#include <iostream>

using namespace std;

int main(){
	
	int idade, servico;
	
	cout << "Digite sua idade: ";
	cin >> idade;
	
	cout << "Digite o tempo de servico: ";
	cin >> servico;
	
	if(idade<60 || servico<25){
		cout << "Voce nao pode se aposentar";
		return 0;
	}else if((idade>=60 && idade<65) || (servico>=25 && servico<30)){
		cout << "Voce pode se aposentar, por idade ou tempo de servico minimos";
	}else{
		cout << "Voce pode se aposentar";
	}
}

