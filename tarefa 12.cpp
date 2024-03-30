/*Leia um número, verifique e escreva se este número é par ou ímpar. Se for par, verifique e escreva se é
maior que 100 ou não e se for ímpar verifique e escreva se é positivo ou negativo.*/

#include <iostream>
using namespace std;

int main(){
	int num;
	
	cout << "\t\nVamos avaliar seu numero!\n";
	cout << "Digite um numero:\n";
	cin >> num;
	
	if (num %2 == 0){
		cout << "Seu numero e par\n";
		
		if(num >=100){
			cout << "Seu numero e maior que 100!";
		}else{
			cout << "Seu numero e menor que 100!";
		}
		
	}else{
		cout << "Seu numero e impar!\n";
		
		if(num <0){
			cout << "Seu numero e menor que zero!";
		}else{
			cout << "Seu numero e maior que zero!";
		}
	}
	
}
