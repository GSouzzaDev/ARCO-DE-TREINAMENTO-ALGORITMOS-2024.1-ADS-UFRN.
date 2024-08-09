/*Escreva uma funcao chamada Troca que troque os valores dos parametros
recebidos. Essa funcão não deve ter retorno.
*/
#include<iostream>
using namespace std;

void Troca(int &n1, int &n2);

int main()
{
    int n1;
    int n2;
    
    cout << "\nDigite o valor de n1 e n2, respectivamente" << endl;
    cin >> n1 >> n2;
    
    cout << "\n\tValor original: ";
    cout << "\n\tValor n1: " << n1;
    cout << "\n\tValor n2: " << n2;
    
    cout << "\n\t_______" << endl;
    Troca(n1, n2);
    
    cout << "\n\tValor trocado: ";
    cout << "\n\tValor n1: " << n1;
    cout << "\n\tValor n2: " << n2;
}

void Troca(int &n1, int &n2){
    int Aux;
    Aux=n1;
    n1=n2;
    n2=Aux;
}
