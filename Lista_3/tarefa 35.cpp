/*Dado um número n inteiro e positivo, dizemos que n é perfeito se n for igual à soma de seus divisores
positivos diferentes de n. Construa um programa em C que verifica se um dado número é perfeito. Ex: 6
é perfeito, pois 1+2+3 = 6. 
*/


#include  <iostream>

using namespace std;

int main(){
	
	int num, divisor, soma=0;
	
	cout <<"Digite um numero: ";
	cin >> num; 
	
	for(divisor=1; divisor<num; divisor++){
		if(num%divisor==0){
			soma+=divisor;
		}
	}
	
	if(soma==num){
		cout << "E perfeito";
	}else{
		cout << "Nao e perfeito";
	}
}
  

