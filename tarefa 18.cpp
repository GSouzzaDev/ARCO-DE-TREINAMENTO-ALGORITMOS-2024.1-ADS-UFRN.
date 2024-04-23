/*18. Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar,
verifique e escreva se o parcelamento foi com juros ou se foi sem juros.*/

#include <iostream>
using namespace std;

int main(){


	int total, parcela, tempo;
	
	cout << "Digite o valor da compra: ";
	cin >> total;
	
	cout << "Digite em quantas vezes foi parcelado: ";
	cin >> tempo;
	
	cout << "Digite o valor da parcela: "; 
	cin >> parcela;
	
	if(tempo*parcela!=total){
		cout << "Voce pagou por juros";
	}else{
		cout << "voce nao pagou por juros";
	}
} 
