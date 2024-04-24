/* 22. Elabore um algoritmo que leia 3 números inteiros e uma ordem (“c” – crescente ou “d” – decrescente) e
escreva-os na ordem solicitada. */

#include <iostream>

using namespace std;

int main(){

	int n1, n2, n3;
	char letra;
	
	cout << "Digite 3 numeros";
	cin >> n1 >> n2 >> n3;
	
	cout << "Deseja organiza-los em ordem (c)crescente ou (d)decrescente? ";
	cin >> letra;
	
	if (letra == 'c' || letra == 'C') {
        (n1 > n2) ? (n2 > n3 ? cout << n3 << " " << n2 << " " << n1 : (n1 > n3 ? cout << n2 << " " << n3 << " " << n1 : cout << n2 << " " << n1 << " " << n3)) : (n2 > n3 ? (n1 > n3 ? cout << n3 << " " << n1 << " " << n2 : cout << n1 << " " << n3 << " " << n2) : cout << n1 << " " << n2 << " " << n3);
    } 
    else if (letra == 'd' || letra == 'D') {
        (n1 > n2) ? (n2 > n3 ? cout << n1 << " " << n2 << " " << n3 : (n1 > n3 ? cout << n1 << " " << n3 << " " << n2 : cout << n3 << " " << n1 << " " << n2)) : (n2 > n3 ? cout << n2 << " " << n1 << " " << n3 : (n1 > n3 ? cout << n3 << " " << n2 << " " << n1 : cout << n2 << " " << n3 << " " << n1));
    } 
    else {
        cout << "Opção invalida!";
    }

    return 0;
}
		

