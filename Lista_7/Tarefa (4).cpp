/*Elabore um algoritmo da calculadora utilizando funções. implementar as seguintes
opções: soma, subtração, divisão, multiplicação
*/

#include <iostream>
using namespace std;

float soma(int n1, int n2);
float subt(int n1, int n2);
float divi(int n1, int n2);
float mult(int n1, int n2);

int main(){
    int n1;
    int n2;
    int opc;
    float resultado;
    cout << "Digite os dois números que deseja: " << endl;
    cin >> n1 >> n2;
    
    cout << "Digite qual operacao deseja efetuar: " << endl;
    cout << "_________" << endl;
    cout << "1-SOMA" << endl;
    cout << "2-SUBTRACAO" << endl;
    cout << "3-DIVISAO" << endl;
    cout << "4-MULTIPLICACAO" << endl;
    cout << "_________" << endl;
    cin >> opc;
    
    switch (opc){
        case 1:
            resultado=soma(n1, n2);
            cout << resultado << endl;
        break;
        
        case 2:
            resultado=subt(n1, n2);
            cout << resultado << endl;
        break;
        
        case 3:
           resultado=divi(n1, n2);
           cout << resultado << endl;
        break;
        
        case 4:
           resultado=mult(n1, n2);
           cout << resultado << endl;
        break;
        default:
            cout << "Essa opcao nao existe" << endl;
    }
}

float soma(int n1, int n2){
    int resultado=n1+n2;
    return resultado;
}

float subt(int n1, int n2){
    int resultado=n1-n2;
    return resultado;
}

float divi(int n1, int n2){
    int resultado=n1/n2;
    return resultado;
}

float mult(int n1, int n2){
    int resultado=n1*n2;
    return resultado;
}
