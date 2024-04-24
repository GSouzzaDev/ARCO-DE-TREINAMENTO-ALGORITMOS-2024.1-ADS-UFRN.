/*21. Elabore um algoritmo que leia um número inteiro e uma letra (“a” – antecessores ou “s” – sucessores) e
mostre a soma dos seus próximos 10 antecessores ou sucessores de acordo com a letra digitada.*/

#include <iostream>

using namespace std;

int main(){
	
	int n=0;
	char letra;
	
	cout << "Digite um numero: ";
	cin >> n;
	
	cout << "Digite (a)para antecessores ou (s)para sucessores: ";
	cin >> letra;
	
	if(letra=='a'|| letra=='A'){
		for(int i=10; i>0; i--){
			n=n-1;
			cout <<"\n\t" <<n;
		}
		
	}else if(letra=='s' || letra=='S'){
		for(int i=10; i>0; i--){
		n=n+1;
		cout <<"\n\t" <<n;
		}
	}else{
		cout << "Voce digitou uma letra invalida";
	}
}



