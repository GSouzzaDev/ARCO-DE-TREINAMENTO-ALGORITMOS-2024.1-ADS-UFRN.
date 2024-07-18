/*Elabore um algoritimo que leia um vetor A de 20 posições. Em seguida, trocar(armazenando em um novo
vetor B) o pirmeiro elemento com o ultimo, o segundo com o penúltimo, e o terceiro com o antepenúltiimo, e
assim sucessivamente, Ao final, escreva os vetores A e B*/

#include <iostream>

using namespace std;

int main() {
    int i, numA[20], numB[20];

    for (i = 0; i < 20; i++) {
        cout << "Digite o numero " << i + 1 << ": ";
        cin >> numA[i];
    }

    for (i = 0; i < 20; i++) {
        numB[i] = numA[19 - i];
    }

    cout << "Vetor A: ";
    for (i = 0; i < 20; i++) {
        cout << numA[i] << " ";
    }
    cout << endl;

    cout << "Vetor B: ";
    for (i = 0; i < 20; i++) {
        cout << numB[i] << " ";
    }
    cout << endl;

    return 0;
}


