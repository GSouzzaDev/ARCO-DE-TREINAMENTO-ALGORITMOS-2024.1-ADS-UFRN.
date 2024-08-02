/*Chico tem 1,50m e cresce 2 centímetros por ano, enquanto Juca tem 1,10m e cresce 3 centímetros por
ano. Construir um algoritmo que calcule e imprima quantos anos serão necessários para que Juca seja
maior que Chico. */

#include <iostream>

using namespace std;

int main(){
	 
	 int anos;
	 float chico=1.50, juca=1.10;
	 
	 
	while(juca<=chico){
	 	chico+=0.02;
	 	juca+=0.03;
	 	anos++;
	}
	 cout <<"Serao necessarios: " << anos << " para Juca ultrapassar Joao";
	
}
