/*Elabore um algoritmo para ler um vetor A de 20 números inteiros e obter a maior diferença entre dois
 elementos consecutivos desse vetor. Ao final, escreva a maior diferença e os índices dos respectivos
 elementos.
*/

#include <iostream>
using namespace std;

int main(){
    const int tamanho = 5;
    int vetor[tamanho];
    int diferenca=0;
    int maior=0;
    int i;
    int ind1;
    int ind2;
    
    for(i=0; i<tamanho; i++){
        cout << "\n\tDigite o vetor " << (i+1) << ": ";
        cin >> vetor[i];
        
        diferenca=vetor[i-1]-vetor[i];
        
        if(diferenca<maior){
        maior=diferenca;
        ind1=vetor[i];
        ind2=vetor[i-1];
        }
    }
    cout << "\n\n\tA maior diferença foi: " << maior; 
    cout << "\n\tentre: " << ind1 << " e " << ind2;
}
