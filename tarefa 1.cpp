/*Leia a idade de uma pessoa expressa em anos, meses e dias e mostre-a expressa apenas em dias.
Obs: Considere cada mês com 30 dias.*/

#include <iostream>

using namespace std;

int main(){
	int anos, meses, dias, total;
	
	cout << "Digite sua idade em anos, meses e dias:\n ";
	cin >> anos >> meses >> dias;
	
	total=(anos*365)+(meses*30)+dias;
	
	cout << "Sua idade em dias e: " << total;
	return 0;
}
