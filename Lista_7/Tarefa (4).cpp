/*Escreva uma função que recebe dois números inteiros n1 e n2 como entrada e 
retorna a soma de todos os números inteiros contidos no intervalo [n1, N2]. Use está
funcão em um programa que lê n1 e N2 do usuário e escreva a soma.
*/

#include <iostream>
using namespace std;

int soma(int n1, int n2);

int main(){
    int n1;
    int n2;
    int resul;
    
    cout << "\n\tDigite dois numeros\n";
    cin >> n1 >> n2;
    
    resul=soma(n1, n2);
    
    cout << "\n\tResultado da soma de " << n1 << " por " << n2 << ":\n";
    cout << resul;
}

int soma(int n1, int n2){
    int i;
    int soma=0;
    for(i=n1; i<=n2; i++){
        soma=soma+i;
    }
    
    return soma;
}
