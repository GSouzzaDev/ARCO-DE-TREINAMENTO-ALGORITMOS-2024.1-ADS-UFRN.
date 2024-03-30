/*A escola “APRENDER” faz o pagamento de seus professores por hora/aula. Faça um algoritmo que calcule
e escreva o salário de um professor, sabendo que o valor da hora/aula segue a tabela abaixo:
Professor nível 1 R$ 12,00 por hora aula
Professor nível 2 R$ 17,00 por hora aula
Professor nível 3 R$ 25,00 por hora aula*/

#include <iostream>
using namespace std;

int main(){
	int nivel, aulas, total;
	
	cout << "\n\tVamos calucular o pagamento do professor!";
	cout <<"\n\nDigite o seu nivel de professor: ";
	cin >> nivel;
	
	cout <<"\nDigite quantas aulas voce da, mensalmente: ";
	cin >> aulas;
	
		switch(nivel){
			case 1:
		 	total=aulas*12;
		 	cout << "\nO pagamento sera de: " << total;
		break;
			case 2:
			 total=aulas*17;
			 cout << "\nO pagamento sera de: " << total;
		break;
		 	case 3:
			 total=aulas*25;
			 cout << "\nO pagamento sera de: " << total;
	   	break;
	   		default:
	   			cout << "\nNivel invalido digitado!";
	}
	

} 
