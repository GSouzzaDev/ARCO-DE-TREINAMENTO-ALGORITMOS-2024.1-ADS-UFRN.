/* cardápio de uma lanchonete é o seguinte:

Lanche:
Código Descrição Preço Unitário
100 Cachorro quente 1,10
101 Baurú simples 1,30
102 Baurú com ovo 1,50
103 Hamburger 1,10
104 Cheesburger 1,30

Bebida:
Código Descrição Preço Unitário
105 Refrigerante 1,00
106 Suco 2,00
107 Nescau 1,50

Escreva um algoritmo que leia o código dos itens pedidos (um sanduiche e uma bebida) e a quantidade
de cada um e calcule o valor a ser pago por aquele lanche.*/

#include <iostream>
using namespace std;

int main(){
	
	int codigo;
	
	cout << "\n\t\tCARDAPIO:";
	cout << "\n\t\tLanches:";
	cout << "\n\t\tCodigo | Descriçao       | Preço Unitario";
	cout << "\n\t\t100    | Cachorro quente | 1,10";
	cout << "\n\t\t101    | Baurú simples   | 1,30";
	cout << "\n\t\t102    | Baurú com ovo   | 1,50";
	cout << "\n\t\t103    | Hamburger       | 1,10";
	cout << "\n\t\t104    | Cheesburger     | 1,30\n";
	cout << "\n\t\tBebidas:";
	cout << "\n\t\tCodigo | Descriçao       | Preço Unitario";
	cout << "\n\t\t105    | Refrigerante    | 1,00";
	cout << "\n\t\t106    | Suco            | 2,00";
	cout << "\n\t\t107    | Nescau 	 | 1,50";
	cin >> codigo;
	switch(codigo){
	  case 100:
	    cout <<"ola";
	    break;
	    case 101:
	    cout <<"olaa";
	    break;
	    case 102:
	    break;
	    case 103:
	    break;
	    case 104:
	    break;
	    case 105:
	    break;
	    case 106:
	    case 107:
	    break;
}
	
}
