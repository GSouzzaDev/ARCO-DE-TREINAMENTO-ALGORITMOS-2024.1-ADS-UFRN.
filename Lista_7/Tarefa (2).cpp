/*Faça uma função que receba um número inteiro por parâmetro e retorna
verdadeiro se ele for par e falso se ele for ímpar.
*/

#include <iostream>
using namespace std;

bool resultado(int numero);

int main(){
    int num;
    bool resu;
    
    cout << "\n\tDigite um numero para verificacao";
    cin >> num;
    
    resu=resultado(num);
    
    cout << "\n\tPar: Verdadeiro=1";
    cout << "\n\tImpar: Falso=0\n\n";
    cout << "Resultado: " << resu;
}

bool resultado(int numero){
    bool validacao;
    if(numero%2==0){
        validacao=true;
    }else{
        validacao=false;
    }
    
    return validacao;
}
