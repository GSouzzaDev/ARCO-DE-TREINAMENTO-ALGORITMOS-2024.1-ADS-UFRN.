/*Elabore um algoritimo que leia e mostre um vetor de 20 elementos inteiros. A seguir conte quantos valores
pares existem no vetor e troque cada um desses elementos por 0. Em seguida escreva o vetor final.
*/

#include <iostream>
using namespace std;

int main(){
	const int numeros=20;
	int valores[numeros];
	int i;
	
	for(i=0; i<numeros; i++){
		cout<<"Digite o valor " << (i+1) << ": ";
		cin>>valores[i];
	}
	
	for(i=0; i<numeros; i++){
		cout << "\n\tVetor " << (i+1) << ": "<< valores[i];
	}
	
	cout<<"\n\n\tSubstituindo todos os numeros pares para 0";
	
	for(i=0; i<numeros; i++){
		if(valores[i]%2==0){
			valores[i]=0;
		}
	}
	
	for(i=0; i<numeros; i++){
		cout << "\n\tVetor " << (i+1) << ": "<< valores[i];
	}
}
