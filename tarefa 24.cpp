/*Elabore um algoritmo que leia um número inteiro maior do que zero (máximo de 5 algarismos), verifique
e escreva a soma de todos os seus algarismos. Por exemplo, para o número 251 a soma será 8 (2 + 5 +
1). Se o número lido não for maior do que zero, o programa terminar com a mensagem “Número
inválido”.*/

#include <iostream>

using namespace std;

int main() {
  int num, num1, num2, num3, num4, num5, soma;
  
  
  cout << "Digite um numero(máx. 5 algarismos): ";
  cin >> num;
  
  if(num<0 || num>99999){
  	cout << "Numero invalido";
  	return 0;
  }
  
  num1=num/10000;
  num2 = (num/1000) % 10;
  num3 = (num/100) % 10;
  num4 = (num/10) % 10;
  num5 = num%10;
  
  soma=num1+num2+num3+num4+num5;
  
  cout << soma;
}

