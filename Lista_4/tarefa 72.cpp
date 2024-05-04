/*Elabore um algoritimo que leia e mostre um vetor de 20 elementos inteiros. A seguir, conte quantas
valores pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final*/

#include <iostream>

using namespace std;

int main(){
	
	int i;
	int numero[20], ordem;
	
	cout << "\n\tDigite 20 posicoes numericas seguintes";
	
	for(i=0; i<20; i++){
	cout << "\n\tDigite a posicao " << i << " :";
	cin >> numero[i];
	}
	
	for(i=0; i<20; i++){
		cout << " " << numero[i] << " ";
	}
	
	for(i=0; i<20; i++){
		if(numero[i]%2==0){
			numero[i]=0;
		}
	}
	
	cout << "\t\t\n";
	cout << "Transformando os pares em zeros: \n";
	
	for(i=0; i<20; i++){
		cout << " " << numero[i] << " ";
	}
}
