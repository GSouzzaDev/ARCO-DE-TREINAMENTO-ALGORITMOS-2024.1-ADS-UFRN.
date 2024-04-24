/*Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
fórmula de conversão é F=(9*C+160)/5, sendo F a temperatura em Fahrenheit e C a temperatura
em Celsius.*/

#include <iostream>

using namespace std;

int main(){
	int celsius, fahr;
	
	cout << "Digite a temperatura em celsius: ";
	cin >> celsius;
	
	fahr=(9*celsius+160)/5;
	
	cout << "A temperatura em convertida em Fahrenheit e: " << fahr;
	
	return 0;	
} 
