/*39. Elabore um algoritmo que leia dois números 
inteiros quaisquer, calcule e escreva: - 
A soma de todos os números pares no intervalo 
fechado entre eles; - A soma dos menores divisores
de cada um dos números impares no intervalo
fechado entre eles.*/
#include<iostream>
using namespace std;

int main(){
    
    int n1, n2, Cont, soma=0, tudo2=0;
    
    cout << "Digite dois valores(um menor e um maior)" << endl;
    cin >> n1 >> n2;
    
    for(Cont=n1; Cont<n2; Cont++){
        if(Cont%2==0){
            soma+=Cont;
        }
    }
    
    for(Cont=n1; Cont<n2; Cont++){
        if(Cont % 2!=0){
            tudo2+=Cont;
            tudo2++;
        }
    }
    cout << "A soma de todos os números pares entre " << n1 << " e " << n2 << " e "<< soma << endl;
    cout << "A soma de todos os números ímpares e o menor divisor de cada um e  " << n1 << " , " << n2 << " e "<< tudo2 << endl;
    return 0;
}
